/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246227
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
    var_19 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 1202303167179606312LL)) ? (-1202303167179606313LL) : (((/* implicit */long long int) 1061698358U)))))), (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)-13575);
                        arr_13 [i_1] [i_2] [(short)0] [i_2] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) arr_5 [i_3] [i_2] [i_1])) <= (-1202303167179606313LL))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 4; i_5 < 11; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) ((arr_17 [i_2] [i_4] [i_2] [i_2]) ? (((/* implicit */long long int) var_5)) : (-1202303167179606313LL)))) ? ((~(3067091350179416765ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1202303167179606313LL)) ? (1202303167179606331LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)18996)) >> (((4995948085531531575ULL) - (4995948085531531570ULL))))) >> (((((((/* implicit */_Bool) (signed char)2)) ? (3071764099138599483LL) : (((/* implicit */long long int) 4073816651U)))) - (3071764099138599482LL)))))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (max((((/* implicit */unsigned long long int) (signed char)-29)), (var_11)))))) ? (min((arr_19 [i_5] [i_0] [i_1] [i_4] [i_5 + 1]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((8401209055980478960ULL) - (((/* implicit */unsigned long long int) var_6)))))))))));
                            arr_20 [i_0] [1] [i_2] [i_1] [i_4] [(short)8] = min(((+(max((1152921504606846975LL), (((/* implicit */long long int) 4073816651U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 794257446U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (35175782154240ULL))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_24 [i_0] [9U] [i_2] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_2)), (var_11)))));
                            arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (signed char)-2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_6] [i_4] [i_1]), (var_18))))) : (min((1152921504606846974LL), (((/* implicit */long long int) 221150633U)))))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5598083149683619680ULL))))))))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) -1585215488)) : (4294967287U))))), (((unsigned long long int) arr_21 [i_1] [i_1]))));
                            var_23 -= ((/* implicit */unsigned int) arr_22 [i_0] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_7]);
                            arr_30 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_17 [1] [i_1] [i_2] [i_1])))))), (max((((/* implicit */long long int) (_Bool)1)), (max((2412507877185184962LL), (((/* implicit */long long int) 2249393153U))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned short)65535)), (2412507877185184962LL))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4047573121111401930LL))))))) ? (((/* implicit */unsigned long long int) min((((arr_27 [i_8] [(short)1] [13]) | (2831181840U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned char)4)))))))) : (min((((unsigned long long int) 4294967292U)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (2831181842U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))))))))));
                            arr_33 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [8LL] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_29 [i_1]))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (1202303167179606331LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1])))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_4] [i_8]))))), ((~(((/* implicit */int) (_Bool)1))))))))));
                        }
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */int) (unsigned short)0))))) / (((unsigned long long int) 2079800040))));
                        var_27 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (unsigned char)7)), (3500709869U))), (((unsigned int) (+(794257446U))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9 + 2] [i_9] [i_2] [i_9])) ? (arr_19 [i_9 - 1] [i_1 - 1] [i_9] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ^ (((((/* implicit */_Bool) min((794257438U), (((/* implicit */unsigned int) -268435456))))) ? (((((/* implicit */_Bool) arr_35 [i_0] [4U] [i_1] [i_9] [i_4] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24270))) : (11956445833083538245ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2086970992U)) ? (1099021263U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))))))))));
                            var_29 -= ((/* implicit */unsigned short) (-(1746435319878577755LL)));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */short) -819794360542613295LL);
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_2])), (min((((/* implicit */unsigned long long int) 1116892707587883008LL)), (arr_35 [i_10] [i_10] [i_2] [i_2] [i_1 + 1] [i_0])))))) ? (((((/* implicit */_Bool) -1746435319878577756LL)) ? (((/* implicit */int) ((short) (unsigned char)254))) : (min((480132338), (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_4] [i_10])))))) : (((int) (signed char)-14))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11513097607737839400ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_40 [i_0] [i_1] [i_2] [i_1] [i_10]))))))) : (((/* implicit */int) ((short) ((signed char) 819794360542613294LL))))));
                            arr_42 [i_2] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_41 [i_1] [12ULL] [(_Bool)1] [i_2] [i_1 + 1] [i_0] [i_1]);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max(((signed char)-16), (((/* implicit */signed char) (!(((/* implicit */_Bool) 913388738U))))))))));
                        }
                    }
                    arr_43 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((6490298240626013370ULL), (((/* implicit */unsigned long long int) 794257446U)))), (((/* implicit */unsigned long long int) ((short) (short)24279)))))) ? (((((/* implicit */long long int) max((((/* implicit */int) var_15)), (var_5)))) / (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [(short)10] [i_2] [i_2] [i_2])), (var_1))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (794257446U) : (arr_41 [i_1] [i_1 - 1] [i_2] [i_2] [i_0] [i_2] [i_0]))))))));
                    arr_44 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_32 [i_0] [i_0] [i_1] [6LL] [i_1]), (arr_0 [i_0] [i_1])))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) 2807119196U))))), (((unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
                    arr_45 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)-17930);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */short) min((((/* implicit */long long int) ((short) var_17))), (min((min((9223372036854775807LL), (((/* implicit */long long int) 786432U)))), (((/* implicit */long long int) ((((/* implicit */long long int) 1)) != (-4503599627370496LL))))))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (_Bool)1)), (497495670U))), (((/* implicit */unsigned int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) 6803921732732215645ULL);
}
