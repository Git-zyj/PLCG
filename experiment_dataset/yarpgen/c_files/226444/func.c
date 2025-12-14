/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226444
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
    var_19 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((long long int) arr_2 [i_0 + 3]))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)10)))), (((/* implicit */long long int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) 578653526))))), (max((((/* implicit */long long int) arr_3 [i_0 - 2])), (-9223372036854775805LL)))))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */int) min((max(((~(arr_5 [i_1]))), (((/* implicit */unsigned int) var_7)))), (min((((/* implicit */unsigned int) arr_0 [i_1 + 2])), (arr_3 [i_1 + 4])))));
        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 3]) : (var_5)))));
        arr_7 [i_1 + 3] = ((/* implicit */unsigned short) max((9223372036854775807LL), (9223372036854775807LL)));
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(arr_1 [i_1 + 4])))) : (((((((/* implicit */_Bool) -7322364930013942534LL)) && (((/* implicit */_Bool) arr_6 [i_1])))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((max((var_10), (arr_11 [i_1 + 2] [8U] [i_1 - 1] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)57344))))))))));
                var_26 += ((/* implicit */unsigned char) ((unsigned short) var_12));
            }
            for (short i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((arr_5 [i_2]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) arr_14 [i_4 - 2] [i_2] [i_2] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) -71991832082796146LL))))), (((short) var_15)))))) : (((((/* implicit */_Bool) max((-7349467640348666330LL), (((/* implicit */long long int) (signed char)-107))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))));
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) -9223372036854775807LL);
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                arr_17 [i_1] [i_2] = ((/* implicit */_Bool) arr_2 [i_1]);
            }
            arr_18 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_1 + 3]), (1073479680)))) ? ((~((~(-9223372036854775807LL))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1]))))), (min((((/* implicit */unsigned int) var_7)), (arr_11 [i_1] [i_2] [i_2] [i_2]))))))));
            var_29 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_3 [i_1 + 1])))) ? (arr_6 [i_1]) : (min((arr_6 [i_1]), (((/* implicit */int) (unsigned short)14691)))))));
            arr_19 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50845)) && (((/* implicit */_Bool) var_2)))))))) ? (min((((/* implicit */unsigned int) (unsigned short)8191)), (4294967292U))) : (((unsigned int) (-9223372036854775807LL - 1LL)))));
            arr_20 [(unsigned short)8] [i_1] [i_2] |= ((/* implicit */int) max((var_1), (var_9)));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            arr_23 [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) max((9223372036854775806LL), (((/* implicit */long long int) ((_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
            {
                arr_26 [i_1] [i_5] [i_6] = (+(((arr_5 [i_1 + 1]) / (arr_5 [i_1 + 1]))));
                arr_27 [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-843858572))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_30 &= ((/* implicit */long long int) var_3);
                            arr_35 [i_1] [2] [15] [i_7 + 1] [i_1] = ((unsigned int) 18446744073709551615ULL);
                            arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_0);
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_9 [i_8] [i_5])))) ? (((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1025000172471152184LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)54114)), (arr_24 [i_1] [i_5] [i_6])))))) ^ (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_6))) - ((+(((/* implicit */int) (unsigned short)8210)))))))));
                            arr_38 [i_1 + 2] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_16))));
            }
            arr_39 [i_1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_1 [i_5]))))) ? (max((((/* implicit */int) var_16)), (arr_6 [i_5]))) : (var_17))) == (((((/* implicit */_Bool) min((((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [11LL] [i_5])), (arr_6 [(unsigned short)10])))) ? (((/* implicit */int) (unsigned short)57326)) : (arr_21 [i_1 - 1] [i_1 + 2])))));
            arr_40 [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)63))));
        }
    }
    var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned int) 2459760315U))) ? (max((var_9), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_18))));
}
