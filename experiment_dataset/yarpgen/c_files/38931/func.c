/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38931
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) -1574337758548629129LL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_6))) && (((/* implicit */_Bool) (signed char)103))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) (+(1574337758548629136LL)));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((+(((/* implicit */int) (short)1870)))) & (((/* implicit */int) (!(((/* implicit */_Bool) -140624904360136173LL))))))))));
                        var_19 = ((/* implicit */unsigned char) (+(var_10)));
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) * (((((/* implicit */_Bool) (signed char)0)) ? (2829216971069814232LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))))));
                        var_21 = ((/* implicit */int) 1574337758548629137LL);
                    }
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        arr_13 [(short)3] [i_1 + 1] [i_0] [(unsigned short)13] [i_4] [i_4] = ((/* implicit */signed char) (unsigned char)60);
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 514691831)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_12)))) != (((/* implicit */int) var_7))));
                        var_22 = ((/* implicit */_Bool) ((var_0) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned short)60687)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) (unsigned char)1))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21388)) + (-302828072)));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [14] [i_0] [i_0] [i_0] [i_0]))) | (-6906139295972055987LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 20LL)) ? (var_1) : (((/* implicit */long long int) -514691831))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)55)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [2LL] [i_0] = ((/* implicit */unsigned short) var_13);
                            arr_21 [i_0] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1 - 1] [i_0] [i_4] [i_6]);
                        }
                    }
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_27 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_7])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 1) 
                        {
                            var_28 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) var_7)))) | (((/* implicit */int) ((((/* implicit */_Bool) 33521664U)) || (var_12))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)44147)))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            arr_32 [i_0] [i_0] [i_2 - 1] [i_7 - 1] [i_9] = (i_0 % 2 == zero) ? (((/* implicit */long long int) (((+((-2147483647 - 1)))) + (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(unsigned char)0] [i_7]))))) : (((/* implicit */long long int) (((+((-2147483647 - 1)))) - (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(unsigned char)0] [i_7])))));
                            arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)77))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 1) 
                        {
                            var_30 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_4 [i_0])) : ((-2147483647 - 1)))))));
                            arr_38 [i_0] [i_1] [i_2] [i_7] [i_10] = ((/* implicit */unsigned char) var_8);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)75)) ? (2147483647) : (((/* implicit */int) (unsigned char)1))));
                        }
                        arr_39 [i_0] [i_0] [i_2] [i_7 - 1] = ((/* implicit */_Bool) (signed char)87);
                    }
                    for (long long int i_11 = 1; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        arr_43 [i_0] [i_0] [i_2] [i_2] [i_11] = ((/* implicit */unsigned long long int) (!(((_Bool) 18007642586491627285ULL))));
                        var_32 = ((/* implicit */unsigned int) (-(var_1)));
                        arr_44 [i_0] [i_1] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((var_3) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_33 = arr_46 [i_12];
        arr_47 [i_12] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -33554432LL)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    var_34 = (-(((/* implicit */int) arr_15 [i_13] [i_15] [(_Bool)1] [16] [i_15] [i_15])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) (short)-4526))))))));
                        var_36 = ((int) ((((/* implicit */_Bool) arr_7 [i_15] [i_14] [i_16])) || (((/* implicit */_Bool) arr_35 [i_13] [i_14] [i_13] [i_15] [i_16]))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-5)) && (((/* implicit */_Bool) -1574337758548629129LL))));
                        arr_59 [(_Bool)0] [i_14] [i_14] [i_15] [i_15] [i_16] &= ((/* implicit */unsigned long long int) arr_57 [8ULL] [i_14] [i_15] [i_16]);
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? ((+(((/* implicit */int) (unsigned char)62)))) : ((-(((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (unsigned char)92))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_1))));
                    }
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_50 [i_13])))) % (max((((/* implicit */long long int) 3733104798U)), (max((var_14), (arr_12 [5U] [i_13] [i_13] [i_14] [(_Bool)1] [i_15])))))));
                    arr_62 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) 2147483647))))) : (((/* implicit */int) ((arr_12 [i_13] [i_14] [i_13] [i_15] [i_15] [i_15]) != (((/* implicit */long long int) ((int) (unsigned char)225))))))));
                }
                arr_63 [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-603386090)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_64 [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)86)) || (((/* implicit */_Bool) (unsigned char)22)))) ? ((~(((/* implicit */int) (signed char)60)))) : (((/* implicit */int) (_Bool)1))));
                var_42 = ((/* implicit */unsigned int) (unsigned char)117);
                arr_65 [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (max((((/* implicit */unsigned int) (unsigned char)178)), (114053629U)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -2147483639)) : (var_0))))));
            }
        } 
    } 
    var_43 ^= ((/* implicit */_Bool) var_8);
    var_44 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) 2117424523)) == (1574337758548629147LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5));
}
