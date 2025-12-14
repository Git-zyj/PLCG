/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208986
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) ((var_10) < (var_0))))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) < (((((/* implicit */_Bool) 3118482913496670479ULL)) ? (9056184909633434842LL) : (-9056184909633434842LL)))));
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_1 [i_0] [i_0])));
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)45))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((long long int) ((var_11) > (var_13))))));
        arr_4 [(unsigned char)14] [(unsigned char)14] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)117)) << (((/* implicit */int) (_Bool)0))))))))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11))))), (arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        var_16 -= ((/* implicit */long long int) (-((~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((unsigned char) max((arr_6 [4ULL]), (var_1))))));
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) min((((unsigned char) 12985481801969567727ULL)), (((/* implicit */unsigned char) var_6))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((-872410303975106955LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))))) > (((/* implicit */int) (unsigned char)117)))), (((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 3])))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        arr_14 [i_3] = ((unsigned char) ((long long int) min((arr_6 [6ULL]), (var_7))));
        arr_15 [i_3 + 3] [i_3] = min((((_Bool) var_0)), (((((/* implicit */_Bool) (+(var_1)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_11)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_27 [i_3] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (-(min((var_13), (((((/* implicit */_Bool) arr_12 [i_5])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                                var_19 = min((((((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_7])) ? (arr_20 [i_3 + 3] [i_5] [i_5]) : (arr_20 [i_5] [i_5] [i_7]))), (max((((/* implicit */unsigned long long int) var_12)), (var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_13))));
                        var_21 = ((/* implicit */long long int) ((_Bool) arr_12 [i_5]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1]))) | (var_2)));
                            arr_32 [i_5] = ((/* implicit */unsigned long long int) ((long long int) var_5));
                            var_23 = ((/* implicit */_Bool) ((unsigned long long int) var_6));
                            var_24 = ((/* implicit */long long int) max((var_24), (((long long int) arr_28 [i_3 + 1]))));
                        }
                        arr_33 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (arr_24 [i_3] [i_3 + 1] [i_3 + 3] [i_3 + 3] [0LL]) : (arr_29 [i_3] [i_3 + 3] [i_3 + 2])));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) arr_8 [i_3]))) - (var_7)));
                    }
                    arr_34 [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((7827417444376986771ULL) - (7827417444376986768ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) var_12))));
                    var_26 = (+(max((var_11), (((/* implicit */long long int) var_3)))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_29 [i_3] [2ULL] [i_3 + 3]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_16 [i_3 + 2] [i_3 + 1]))))) ? (max((((arr_23 [4LL] [i_4] [4LL] [i_5]) - (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */unsigned long long int) 9056184909633434841LL)) | (18446744073709551615ULL))))))));
                }
            } 
        } 
    }
}
