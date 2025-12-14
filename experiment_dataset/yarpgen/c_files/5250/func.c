/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5250
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [4ULL])) ? (((/* implicit */int) ((946925111526691265ULL) == (((/* implicit */unsigned long long int) arr_0 [(signed char)4]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (946925111526691265ULL)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            var_12 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))) == (var_5));
            arr_5 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0]))));
        }
        for (short i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_2)))) * (((((/* implicit */int) arr_8 [12ULL])) / (((/* implicit */int) var_2)))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (unsigned char)229)))));
                            var_15 -= ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_0] [i_2 - 1]))));
                            arr_18 [i_0] [(short)14] [i_0] [i_3] [(short)14] [i_0] &= ((/* implicit */unsigned short) arr_16 [i_2] [i_2 - 2] [i_2] [i_2] [12U]);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (17499818962182860343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((((/* implicit */int) (short)16097)) | (((/* implicit */int) (signed char)3))))));
        }
    }
    for (signed char i_7 = 2; i_7 < 8; i_7 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((min((arr_14 [i_7 - 2]), (((/* implicit */int) (unsigned char)243)))) << ((((((~(((var_3) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_7])))))) + (28))) - (7)))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(arr_23 [i_7]))), (((3ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) arr_19 [i_7 + 1] [i_7]))))) : ((+(1636515991U)))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)22)) << (((((/* implicit */int) ((unsigned char) 9223372036854775807LL))) - (242)))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-6491)) : (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [6ULL])))))));
        var_22 *= ((/* implicit */int) ((unsigned long long int) (((+(((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])))) < (((/* implicit */int) var_3)))));
        var_23 = ((/* implicit */_Bool) ((min(((~(((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) (_Bool)0)))) & ((~(((/* implicit */int) var_6))))));
        var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_15 [i_8] [i_8])) - (142)))))) && (((/* implicit */_Bool) 12610862721202761746ULL)))))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_26 [i_8])))), (((/* implicit */int) max((var_3), (var_6)))))) | (min(((~(((/* implicit */int) (signed char)32)))), (((/* implicit */int) var_2))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_9 = 3; i_9 < 22; i_9 += 1) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_2)))))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-103))))))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (arr_32 [i_9 + 3]) : (arr_32 [24])));
    }
    var_28 = ((/* implicit */_Bool) var_5);
}
