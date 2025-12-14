/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242496
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
    var_17 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-17827))))) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((_Bool) arr_4 [i_0 - 1] [i_0 - 2] [i_1])))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : (var_2))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_2 [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned long long int) ((int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9)))))))) - (((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) var_16)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15174)))))))));
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15169)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1))));
                var_22 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [8])) ? (((/* implicit */int) arr_5 [16])) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            arr_15 [i_5] [i_4] &= ((/* implicit */short) arr_7 [i_5 + 1] [i_4]);
            var_23 &= (!(((/* implicit */_Bool) var_4)));
            arr_16 [(_Bool)1] = ((/* implicit */int) var_2);
        }
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_20 [i_4] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (11962464515757257906ULL) : (((/* implicit */unsigned long long int) -1683566107)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) var_14)) : (var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-93)) & (((/* implicit */int) (_Bool)1))))) : (arr_8 [i_4] [i_6] [i_6])))));
            var_24 = ((/* implicit */long long int) arr_6 [i_4]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_25 ^= ((/* implicit */_Bool) max((-1104582219), (-1073741824)));
                        var_26 += ((/* implicit */_Bool) var_4);
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_8 [i_8] [i_6] [i_6]), (-4250129035269810343LL)))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((((/* implicit */unsigned long long int) var_10)) * (var_16))))) / (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        arr_28 [i_4] [(signed char)1] [i_7] = ((/* implicit */long long int) (-((~(var_0)))));
                        arr_29 [i_4] [(unsigned short)2] [i_7] [i_8] [4] = ((/* implicit */int) ((((((var_9) / (((/* implicit */unsigned long long int) var_4)))) - (max((16325412354936995145ULL), (((/* implicit */unsigned long long int) var_10)))))) - (5858165221856048635ULL)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_34 [i_9] [i_9] [i_4] = ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))));
            var_28 = ((/* implicit */long long int) ((unsigned short) var_1));
            var_29 = ((/* implicit */short) ((arr_8 [i_9 - 1] [i_9 - 1] [i_9]) << (((arr_8 [i_9] [i_9 - 1] [i_4]) - (185901749669503967LL)))));
        }
        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            var_30 &= ((/* implicit */int) arr_33 [i_4] [i_10]);
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) (-(var_0)));
                var_32 = ((/* implicit */long long int) ((unsigned long long int) (+(var_0))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15193))) >= (-1328184224809055526LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11] [i_11]))))) : (((/* implicit */int) ((((/* implicit */int) (short)-14848)) < (arr_37 [i_4] [i_10] [i_11] [i_12])))))))));
                    var_34 = ((/* implicit */_Bool) arr_5 [i_4]);
                    var_35 = ((/* implicit */unsigned int) (!(((_Bool) (~(((/* implicit */int) var_12)))))));
                }
            }
            arr_44 [i_4] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [(_Bool)1])), (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (signed char)98)))))));
        }
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_4] [i_4])), (var_8)))) ? (((((/* implicit */_Bool) ((2554210657U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753)))))) ? (((((/* implicit */_Bool) (unsigned short)50342)) ? (((/* implicit */int) (unsigned short)65521)) : (var_5))) : (((((/* implicit */_Bool) var_8)) ? (arr_43 [i_4] [i_4] [i_4]) : (var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)55009)), (var_10)))))))));
        var_37 ^= ((/* implicit */short) (-(arr_33 [i_4] [i_4])));
        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned long long int) var_10))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_4] [i_4] [(_Bool)1])) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)55031))))))))));
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((10815576480315842654ULL), (((/* implicit */unsigned long long int) var_5))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_42 [i_13])))))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_4] [i_4] [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_13) ^ (((/* implicit */unsigned long long int) arr_38 [i_4] [i_4] [i_14 - 1] [i_4]))))))));
                var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_36 [i_14 + 1] [i_14 + 1])) ? (((/* implicit */int) arr_36 [i_14 - 1] [i_14 - 1])) : (var_4)))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_57 [i_4] [i_4] [i_14] [i_16] [8U] [i_14] [i_13] = ((/* implicit */unsigned char) (~((+((+(var_10)))))));
                            var_41 = ((/* implicit */_Bool) var_4);
                            var_42 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 12588578851853502976ULL)) ? (((/* implicit */int) arr_22 [i_14 + 1] [i_15] [i_15])) : (((/* implicit */int) arr_22 [i_14 + 1] [i_16] [i_16])))) & (((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))));
                            var_43 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))) / (arr_10 [i_16])));
                        }
                    } 
                } 
                var_44 = ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11962464515757257886ULL));
                arr_58 [i_14] = ((/* implicit */short) -9223372036854775783LL);
            }
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (((-(var_2))) - (6484279557952293731ULL))))));
        }
        /* vectorizable */
        for (long long int i_17 = 2; i_17 < 11; i_17 += 3) 
        {
            arr_63 [i_17] [7ULL] [(short)4] = (+(((((/* implicit */_Bool) 4698219878218325276ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4] [5ULL] [i_17] [i_17] [(signed char)6] [(_Bool)1]))) : (var_13))));
            arr_64 [i_4] [i_17] [(short)10] = ((/* implicit */long long int) (+(var_9)));
        }
    }
}
