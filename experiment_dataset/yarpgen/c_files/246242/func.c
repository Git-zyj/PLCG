/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246242
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
    var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 36028797018963967LL))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (var_13))))) >> (((((/* implicit */int) ((unsigned short) ((unsigned int) (short)-31087)))) - (34400)))));
    var_15 = ((/* implicit */_Bool) (-(var_6)));
    var_16 = ((/* implicit */short) ((unsigned long long int) ((((unsigned long long int) var_7)) << (((var_4) - (2574541550U))))));
    var_17 = ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31086))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_19 = arr_1 [i_4];
                            arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) 1945929516U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31087))) : (arr_10 [i_2] [i_1] [i_1] [i_3] [(_Bool)0]))) ^ (((/* implicit */unsigned long long int) var_0))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (var_11)))) ? (((((/* implicit */_Bool) (short)-31087)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (371311118U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))));
                            arr_14 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3 + 1] [i_3 + 1])) ? (2147483647) : ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */unsigned long long int) 1864636133U)) : (arr_10 [i_2] [7ULL] [i_2] [i_2] [i_2])))));
            }
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [2ULL])) ? (((/* implicit */int) (short)31087)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((2147483647) + (((/* implicit */int) arr_21 [6LL] [i_0] [i_5] [4LL] [i_7]))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                        }
                    } 
                } 
                arr_24 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) 65535));
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0])) && (((/* implicit */_Bool) arr_11 [i_8] [i_1] [8U]))));
                arr_27 [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [i_8] [i_8] [6U] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
            }
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (short)31087))));
            var_25 = ((((/* implicit */_Bool) (short)31063)) ? ((-(-2789143562139432252LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            var_26 = ((/* implicit */unsigned short) 8643740902946214479ULL);
            arr_28 [i_1] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1]);
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned char)229))));
            var_27 = ((/* implicit */short) var_6);
            var_28 = ((/* implicit */_Bool) (((~(arr_15 [i_0] [i_0] [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2789143562139432242LL)) ? (arr_9 [i_0] [i_0] [i_0] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 3; i_11 < 6; i_11 += 2) 
            {
                {
                    var_29 = ((/* implicit */long long int) ((arr_19 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 2]) % (((/* implicit */unsigned long long int) 652635732U))));
                    var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_10] [i_11 - 3] [i_11 + 3])) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) == (((/* implicit */int) var_3))))))));
                    var_31 = ((/* implicit */unsigned char) 6191552307512369391ULL);
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 2930802576U))) || (((/* implicit */_Bool) 3276479885608437746ULL)))))));
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((((((3462754945713786021ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31087))))) ? (((/* implicit */int) ((_Bool) 9223372036854775807LL))) : (((/* implicit */int) arr_39 [i_12])))) <= (((((/* implicit */_Bool) min((((/* implicit */short) arr_41 [i_12] [i_12])), (arr_39 [i_12])))) ? (((var_2) ? (((/* implicit */int) arr_41 [i_12] [i_12])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)0))))));
        var_34 = ((/* implicit */unsigned long long int) 2147483647);
    }
    for (long long int i_13 = 3; i_13 < 18; i_13 += 1) 
    {
        var_35 = ((/* implicit */unsigned char) ((((unsigned int) arr_44 [i_13])) == (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_13])))));
        arr_45 [i_13 - 1] = ((/* implicit */int) ((long long int) 18446744073709551615ULL));
        arr_46 [i_13] &= ((/* implicit */long long int) (unsigned char)150);
    }
    for (int i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14])) ? (((/* implicit */int) arr_39 [i_14])) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)31065))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14]))) + (4090570215031108114LL))))), (((/* implicit */long long int) (unsigned char)255)))))));
        arr_50 [i_14] [i_14] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_14]))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) : (((0ULL) & (((/* implicit */unsigned long long int) 4294967295U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((int) var_7))) : (((((/* implicit */_Bool) arr_49 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3327036038U)))))));
        var_37 += ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_41 [i_14] [i_14]))))))) ? (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14]))) & (arr_44 [i_14])))))) : (((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (max((((/* implicit */long long int) arr_44 [i_14])), (arr_38 [i_14] [i_14])))))));
        var_38 -= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_38 [i_14] [i_14])))));
    }
}
