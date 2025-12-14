/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240145
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) (-(var_1))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-20))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)20)) : (var_0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-80)))))))))))));
    var_13 = ((/* implicit */long long int) (_Bool)0);
    var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? ((-(var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) (~(var_0)));
                var_17 = ((/* implicit */int) (+(arr_6 [i_1])));
                var_18 = ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_8 [i_0] [21ULL]))));
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) ((long long int) arr_12 [i_3] [i_0]));
                var_20 = ((/* implicit */_Bool) var_10);
                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned long long int) (unsigned char)214);
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_0] [(unsigned char)14] [i_0])))) ? (((((/* implicit */_Bool) 4963425142844846171LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1] [i_1])))) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_20 [i_4] [i_1] [i_1] [i_1] [i_4])) : (((/* implicit */int) (signed char)3))));
            }
            var_26 = ((/* implicit */unsigned char) (((((_Bool)1) ? (1898913868865230449LL) : (var_5))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_12 [12ULL] [18]))))))));
        }
        var_27 = ((/* implicit */long long int) (+(arr_4 [19LL] [19LL] [i_0])));
    }
    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_28 = ((/* implicit */long long int) ((_Bool) arr_19 [i_7]));
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [2])))));
        var_30 = ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_31 *= ((/* implicit */signed char) (~(max((((/* implicit */int) arr_27 [i_8])), (((((/* implicit */_Bool) (signed char)45)) ? (var_0) : (var_9)))))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((var_5) + (6149233095970111388LL)))))) : (((((/* implicit */_Bool) (signed char)-10)) ? (arr_5 [i_8]) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])))))))));
    }
}
