/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240992
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((-54118033014544502LL), (((/* implicit */long long int) var_0))))) ? ((+(var_0))) : ((+(((/* implicit */int) (unsigned char)124)))))) & (max((var_4), (((/* implicit */int) var_5))))));
    var_11 = ((/* implicit */unsigned char) (+(var_9)));
    var_12 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(var_6)))))) || (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_13 = (!(((/* implicit */_Bool) var_4)));
                            var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_0] [i_1])) : (1013007286))) : (((/* implicit */int) (unsigned short)35466)))) >> (((((/* implicit */_Bool) (+(arr_7 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)5066)) : (var_1)))))));
                            arr_9 [0LL] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((var_8) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17073))) : (7729857318648698950LL)))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1] [i_3])) : (arr_7 [i_3]))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)29431)) ? (var_4) : (arr_4 [i_3] [i_2]))) : (((/* implicit */int) var_2))))) ? (((int) ((((/* implicit */_Bool) 612304257)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-16293))))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) var_6)) : (var_9)))) ? (((/* implicit */int) ((var_6) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [i_1])))))))));
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) << (((((/* implicit */int) (unsigned char)248)) - (243)))));
                                var_17 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1638253801)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (1228797720329408316ULL))) : (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0]) ? (var_1) : (var_0)))))));
                                var_18 |= (+(3412220639U));
                                var_19 = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) -1013007281)) ? (((/* implicit */int) (unsigned short)35823)) : (((/* implicit */int) (signed char)107)))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned char) -131231429);
                                var_21 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (unsigned char)166)))));
                            }
                            for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(var_1))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                                var_22 ^= ((/* implicit */unsigned short) 447174632);
                                var_23 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (unsigned char)36)))));
                                arr_20 [i_0] [(signed char)9] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_7 [i_1 - 1]) : (arr_7 [i_2]))), (var_1)));
                                var_24 = ((/* implicit */unsigned long long int) ((short) min((arr_4 [i_2] [i_3 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [1] [i_1] [(signed char)5] [i_3 - 2])))))));
                                var_26 = ((/* implicit */unsigned short) -880793690);
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    var_27 ^= ((/* implicit */unsigned short) var_7);
                    arr_25 [i_0] = ((/* implicit */long long int) var_0);
                }
                var_28 = ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)93)))) & (((/* implicit */int) (_Bool)1)))), (arr_24 [i_0] [i_1] [(unsigned short)17])));
                arr_26 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2471468000U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [20U] [i_1])) : (arr_15 [i_0] [(unsigned short)1] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_2))))) ? (min((arr_15 [i_1] [i_1 - 1] [(signed char)9] [i_1 + 3] [i_1 - 1]), (var_0))) : (((((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)6426)) : (-972311994))) << (((/* implicit */int) (!(arr_3 [i_1]))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1760064842U)) || (((/* implicit */_Bool) (unsigned short)17455)))) ? ((+(((((/* implicit */unsigned long long int) var_1)) - (7588277508244788638ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) | (758947170U)))) : ((~(-2228247347120966938LL))))))));
}
