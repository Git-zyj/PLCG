/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24010
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (signed char)(-127 - 1)))) / (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((524287), (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_2 [i_0])))))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) (+(-1796989878))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2]))))) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2]))));
            arr_7 [i_0] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_6 [i_0]) < (((/* implicit */unsigned long long int) -496040919)))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            arr_18 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61102))) / (arr_11 [i_0] [i_1] [i_2] [i_2]))) < (((/* implicit */long long int) max((1796122463U), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)4419)) < (((/* implicit */int) arr_15 [i_0] [i_3] [i_4] [i_3] [(short)2]))))), ((unsigned char)115))))) : (((unsigned long long int) max(((short)29931), (((/* implicit */short) (signed char)84)))))));
                            arr_19 [i_3] [i_1] [i_1 - 2] [1ULL] [i_1] = ((/* implicit */unsigned int) var_0);
                            arr_20 [i_4] [i_4] [i_3] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? ((-(-7322799619563942458LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 496040920)), (3950245596U))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) - ((+(((/* implicit */int) (unsigned char)188))))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_5 [i_3 - 1] [i_1]))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */int) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) var_1))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (344721703U))))))));
                            arr_24 [i_3] [i_3 - 1] [i_1] [i_3] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) (unsigned short)65520)));
                            var_15 ^= ((/* implicit */long long int) (!(var_1)));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) (signed char)13);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)10] [i_0]))) < (3054993613830177088LL)))))));
                            arr_28 [i_0] [i_1 - 2] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)2])) ? (3054993613830177068LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))))) ? (var_8) : (((/* implicit */int) arr_1 [(_Bool)1]))));
                            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_23 [i_6 - 4] [i_6 - 4] [i_6 - 3] [i_6 - 4] [i_6 - 1])) : ((~(((/* implicit */int) arr_27 [i_0] [i_3 + 3] [i_2] [i_3 - 1] [i_6] [i_2] [i_6]))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_31 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)61087))))) && (((/* implicit */_Bool) ((unsigned short) var_6)))));
                            arr_32 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) (signed char)122);
        }
    }
    var_19 = ((/* implicit */short) var_1);
}
