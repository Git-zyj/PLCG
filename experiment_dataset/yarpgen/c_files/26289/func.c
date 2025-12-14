/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26289
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)9866)), (var_18)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_2 [1]))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_8))))) & (min((var_16), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) max((((((/* implicit */int) (signed char)-125)) & (((/* implicit */int) (signed char)32)))), (((/* implicit */int) ((short) 12996120642956985444ULL)))))));
                var_19 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (14168434788996725748ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))), ((~(var_5))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min(((signed char)-37), ((signed char)-1)));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) arr_6 [i_2] [i_3]);
            var_22 += ((/* implicit */unsigned short) (signed char)0);
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) var_17))))), ((+(0LL))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1020406398)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)9866)) : (((/* implicit */int) (short)15613)))) : (((/* implicit */int) (signed char)124))))));
            var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) -3934567012966853411LL))) ? (min((((/* implicit */long long int) (unsigned short)0)), (3934567012966853405LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)-5))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                arr_18 [i_2] [i_2] [i_4] [3ULL] = ((/* implicit */signed char) 7962880973238280518LL);
                var_26 = ((/* implicit */unsigned short) arr_3 [i_5] [(short)13]);
            }
            var_27 = ((/* implicit */unsigned short) (~(max((min((((/* implicit */int) var_15)), (-2147483629))), (((/* implicit */int) ((unsigned short) var_17)))))));
        }
        /* vectorizable */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3934567012966853406LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) && ((!(((/* implicit */_Bool) arr_20 [i_6 - 2] [i_2]))))));
            var_28 *= ((/* implicit */_Bool) var_4);
            var_29 = ((/* implicit */signed char) ((((var_11) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33088)) / (arr_19 [i_2])))) : (-5737976934621929942LL)));
        }
        arr_22 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) (unsigned short)26862);
    }
    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max((((min((((/* implicit */long long int) arr_23 [(signed char)8])), (5400298949486649606LL))) >> (((((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (18446744073709551583ULL))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)0)), ((signed char)22)))), ((unsigned short)13309)))))))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_7 [i_7] [(signed char)12]))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((14ULL) >> (((/* implicit */int) (_Bool)1)))) & (((/* implicit */unsigned long long int) arr_23 [i_7 + 3]))))) ? (min((7962880973238280501LL), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15))))));
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    var_33 = max((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)34046)))) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)1)))))), (((((/* implicit */_Bool) 13370681854699247778ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-59), (arr_27 [i_8] [i_8] [i_8 - 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-11203))) + (2469493011151007051LL))))));
                    var_34 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17356)))))) ? (((/* implicit */unsigned long long int) 712521301U)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 3934567012966853411LL)) : (var_5)))))));
                    arr_31 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((short) (signed char)77));
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_37 [i_9] [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)241)) - (218)))))) | (((((/* implicit */_Bool) (signed char)9)) ? (min((((/* implicit */long long int) 4192892794U)), (2469493011151007051LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1))))))))));
                            var_35 -= ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) (unsigned short)34049)))), (((/* implicit */int) (short)3105))))));
                            arr_38 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) (_Bool)0);
                        }
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9])) - (((/* implicit */int) (signed char)-74))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (arr_16 [(unsigned short)8] [(unsigned short)8] [10ULL] [i_11])))) : (min((var_5), (((/* implicit */unsigned long long int) var_18)))))))))));
                        arr_39 [i_8 - 1] [i_8 - 2] [i_9] [i_10] [(_Bool)1] [i_11] = ((/* implicit */int) (short)23941);
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            arr_43 [i_10] = ((min((arr_12 [i_10] [i_11] [i_13]), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (signed char)-27))))))) != (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-4180)))), (min((var_0), (((/* implicit */int) (signed char)-79))))))));
                            var_37 += ((/* implicit */signed char) ((unsigned int) (unsigned char)36));
                            arr_44 [i_8] [i_10] [(unsigned char)6] [4] [i_11] [i_13] [i_13] = ((/* implicit */long long int) ((short) ((unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (signed char)-74))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)57753)) ? (var_14) : (((/* implicit */long long int) -1)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (536870911ULL)))) ? (((((/* implicit */_Bool) 259859157U)) ? (var_5) : (((/* implicit */unsigned long long int) arr_45 [i_8] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_8])))) : ((+(12793703382609572979ULL)))))))));
                            arr_47 [i_10] [i_9] [3] [i_10] [i_10] [i_9] [i_10] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) arr_1 [i_10])) : (var_5))))), (((min((((/* implicit */unsigned long long int) (unsigned short)5590)), (3551600526631455385ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))));
                            arr_48 [i_8 + 1] [(unsigned short)2] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) ((unsigned short) (unsigned char)71))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))))) ? (((((/* implicit */_Bool) (short)8)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_8] [i_10])), (11805476544217926588ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) var_15)))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_49 [i_10] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)23)) ? (3293016649U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            arr_50 [i_8] [i_10] [i_8] [i_8] [i_8] [i_8] [0U] = ((/* implicit */int) var_11);
                        }
                    }
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        arr_53 [i_10] [i_8] [i_9] [i_10] [i_10] [i_15] = var_1;
                        arr_54 [i_8 - 2] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) -151533252)) : (4035108139U)))) ? (4017405339U) : (((/* implicit */unsigned int) -830728763))))) ? ((~((~(arr_34 [i_10] [i_9] [i_10] [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-60))))));
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)159)) / (((/* implicit */int) max(((unsigned short)65523), (((/* implicit */unsigned short) var_15)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_10])) && (var_11)))), (((((/* implicit */_Bool) (unsigned char)2)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_10] [i_15])))))))) : (637661626095469971LL));
                        arr_55 [i_10] = ((/* implicit */signed char) ((((_Bool) arr_27 [i_8] [i_10] [i_8 - 2])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_33 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_10])), ((unsigned char)13)))) : ((~(((/* implicit */int) var_17))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_17 = 1; i_17 < 12; i_17 += 3) 
                        {
                            arr_60 [i_8] [i_8] [i_10] = ((/* implicit */unsigned char) -637661626095469951LL);
                            arr_61 [i_8] [i_10] [i_9] [i_10] [i_10] [i_16] [i_8] = ((/* implicit */unsigned char) ((signed char) 3293016654U));
                        }
                        arr_62 [i_8 + 1] [i_10] = ((/* implicit */signed char) var_5);
                        arr_63 [(signed char)2] [i_10] [(signed char)2] [i_10] [i_8] = ((/* implicit */_Bool) ((unsigned char) (short)-28567));
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        arr_67 [i_10] [(short)1] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                        arr_68 [i_10] = ((/* implicit */signed char) (short)8366);
                        arr_69 [i_8] [i_9] [i_10] [i_10] [i_9] [i_9] = (+(1721520046));
                    }
                }
            } 
        } 
        var_40 *= max((((/* implicit */unsigned long long int) max((max(((unsigned short)6675), ((unsigned short)8))), (max(((unsigned short)0), (var_10)))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (4162982622030385969ULL) : (((/* implicit */unsigned long long int) 3837455573U)))));
    }
    var_41 = ((/* implicit */signed char) ((unsigned short) ((var_3) ? ((~(1U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))));
}
