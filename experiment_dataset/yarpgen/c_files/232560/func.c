/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232560
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (short)0))));
    var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */int) min((var_1), ((short)0)))), (((((/* implicit */_Bool) (short)-31921)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)7)))))), (((/* implicit */int) ((unsigned short) (short)-31921)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_2))));
        var_16 = ((/* implicit */unsigned int) max((8983693060052436493ULL), (((/* implicit */unsigned long long int) -880969882))));
        var_17 += ((/* implicit */_Bool) arr_1 [i_0 + 2]);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_18 |= ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [(signed char)0])))))))));
            var_19 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) < ((+(var_7))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_11))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) 3715920736U)) && (((/* implicit */_Bool) 9463051013657115123ULL))))), ((short)-31921))))));
                            var_22 *= ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)14658)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [0U] [(_Bool)1] [(unsigned short)6]))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9)))) : (((/* implicit */int) max(((short)-14682), (((/* implicit */short) (_Bool)0)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */unsigned char) var_7);
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (-((+(var_6)))));
                        }
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 268738200U)) && ((_Bool)1)));
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) max((-133731827), (((/* implicit */int) (signed char)86))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            var_26 ^= ((/* implicit */long long int) (_Bool)1);
                            arr_19 [i_7 + 2] [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)7080), ((unsigned short)0))))) : (((long long int) (signed char)-71)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 &= ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)50))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1699684980)) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)199)), (var_9))))))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [8]))) + (var_7)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [(unsigned char)2])) - (((/* implicit */int) var_12)))))) : ((-((-(((/* implicit */int) (unsigned char)176)))))))))));
                            var_29 = max((((/* implicit */unsigned short) var_1)), (((unsigned short) (+(15986536955934528025ULL)))));
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) 4336644074548188345LL);
                        }
                        var_30 = ((/* implicit */unsigned char) -5752285988302432973LL);
                        var_31 = ((unsigned long long int) var_6);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_26 [i_0] [i_9] = ((/* implicit */signed char) -3691378527909652384LL);
            arr_27 [i_0] = ((/* implicit */short) (-(var_7)));
            /* LoopSeq 1 */
            for (long long int i_10 = 4; i_10 < 9; i_10 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_0 + 3] [i_9] [i_9] [i_0] [i_10 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) - (9860))))))));
                var_33 = ((/* implicit */_Bool) arr_28 [i_0]);
                arr_30 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_10))))));
            }
        }
    }
}
