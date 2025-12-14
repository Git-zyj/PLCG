/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223241
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
    var_11 = ((unsigned char) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)244))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0])));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_2)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((unsigned short)31039), (((/* implicit */unsigned short) min(((signed char)-84), (((/* implicit */signed char) var_4))))))))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) var_7);
        var_13 = ((/* implicit */int) ((((long long int) arr_2 [i_1 - 1])) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1])))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_17 [i_5] [i_5] [i_2] = ((/* implicit */signed char) max((((var_7) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)127))))))), (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)65505), (arr_9 [i_1] [i_3])))), ((~(((/* implicit */int) arr_15 [i_5])))))))));
                                var_14 -= ((((/* implicit */_Bool) ((var_4) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4])) << (((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) (_Bool)1))))))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 1355595151))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_1] [i_2] [i_3])), (var_2)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)65535))))));
                    arr_19 [i_1] [i_2] [i_3] = arr_10 [i_1] [i_3] [i_3];
                }
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */signed char) max((max(((unsigned short)65535), (arr_4 [i_1 + 2]))), (((/* implicit */unsigned short) ((signed char) (unsigned short)65528)))));
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8))))))))));
    }
    var_16 += ((/* implicit */int) var_7);
}
