/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241134
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) max((15998928621712747385ULL), (15998928621712747385ULL)))) ? (((((/* implicit */_Bool) var_14)) ? (15998928621712747402ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_16)) ^ (var_0))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_18)))) ? (min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)16038)))) : (((((/* implicit */_Bool) (short)10482)) ? (((/* implicit */int) (short)960)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_23 = ((/* implicit */int) arr_2 [2LL] [i_0]);
        arr_4 [(_Bool)1] = ((/* implicit */_Bool) min(((~(min((((/* implicit */long long int) var_1)), (-34359738368LL))))), (((/* implicit */long long int) ((1959851260676762384LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16038))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 585733084U)) ? (max((2447815451996804237ULL), (((/* implicit */unsigned long long int) max((585733084U), (var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                arr_15 [i_1] = ((/* implicit */long long int) (unsigned short)0);
                var_24 = (!(((/* implicit */_Bool) 3709234211U)));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    var_25 = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)9614)), (((unsigned short) arr_16 [i_1] [i_1] [i_3] [i_4] [i_4 + 3] [i_1]))))));
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32106)) ? (4446252027436513165ULL) : (((/* implicit */unsigned long long int) -8214720923413091494LL))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_4]))) : (min((((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) var_19))))), (2447815451996804237ULL)))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_10 [i_1] [i_2] [i_1]))));
                    var_29 = ((/* implicit */long long int) (short)-32103);
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 6; i_6 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_6 + 4] [i_6 - 1] [i_3 - 1] [i_3 - 2])) ? (min((((/* implicit */unsigned long long int) var_2)), (11115881356490495802ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2] [i_5])) && (((/* implicit */_Bool) -1)))))))), (((/* implicit */unsigned long long int) var_8)))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 288195191779622912ULL))) > (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            var_32 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)12495)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (short)12495)))), (((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))))));
            var_33 = ((/* implicit */short) (_Bool)1);
        }
        arr_24 [i_1] = (short)-32080;
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_6 [i_1]))));
        var_35 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */int) (short)22);
        arr_28 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_7 + 1]))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) : (var_5)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_29 [i_8]))))))) ? (((((/* implicit */_Bool) 15998928621712747379ULL)) ? (((((/* implicit */unsigned long long int) arr_0 [i_8])) % (11223945260299810686ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) (short)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)16046)))))))));
        arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((((long long int) var_8)) == (((/* implicit */long long int) (+(var_7))))))) << (((2447815451996804237ULL) - (2447815451996804208ULL)))));
        var_37 += ((/* implicit */unsigned long long int) var_12);
    }
}
