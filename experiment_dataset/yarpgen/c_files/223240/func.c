/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223240
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [(signed char)7]);
        var_19 = ((((/* implicit */long long int) (((-2147483647 - 1)) + (2147483647)))) % (min((max((((/* implicit */long long int) var_3)), (var_2))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (arr_0 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 1] = (((((-2147483647 - 1)) != (-1))) ? (((((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1]) : (arr_4 [i_1 + 2]))) - (((int) arr_3 [i_1] [i_1])))) : (((int) ((short) arr_5 [(signed char)5]))));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [(short)14])), (var_5)))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_17))) : (((/* implicit */unsigned long long int) ((int) var_7))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_2] [i_3] [i_4])))) - (min((((/* implicit */long long int) 6)), (175289476350290364LL)))));
                        var_21 = ((/* implicit */unsigned short) arr_10 [i_3] [i_2] [i_1 - 1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (~(((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned long long int) ((unsigned int) var_11))))));
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2]), (arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2])))), (min((var_4), ((+(arr_12 [i_5 - 1] [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_29 [i_5] [i_6] [13LL] = ((/* implicit */unsigned char) var_4);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) 6)) / (11111661151413458981ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_5 + 2]))))), (var_8)))))));
                                var_23 = (~(var_3));
                                arr_34 [i_5] = ((/* implicit */long long int) var_12);
                                var_24 = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    arr_35 [i_5] = ((/* implicit */long long int) ((254238558U) ^ (((/* implicit */unsigned int) -1927794937))));
                    var_25 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_5 - 2] [i_5] [i_6] [i_6] [i_7]), (((/* implicit */int) var_18))))))))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_12 [i_5] [i_6] [i_7 + 1])))), (var_17)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
    {
        arr_38 [i_10 - 1] = ((/* implicit */unsigned char) max(((unsigned short)17197), (((/* implicit */unsigned short) (unsigned char)169))));
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_26 = ((/* implicit */signed char) var_15);
            arr_41 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_31 [i_10 - 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10 - 1] [i_11]))) : (var_16)))));
            var_27 += ((/* implicit */unsigned int) arr_28 [14U] [i_10 + 2] [14U] [14U]);
        }
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_28 *= ((/* implicit */unsigned int) (~(var_16)));
            var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((long long int) var_10)) : ((~(arr_44 [i_10] [i_10 + 1] [i_10]))))) >> (((((int) 2147483623)) - (2147483584)))));
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) / (((2147483647) % (-660471539))))))));
            arr_46 [i_10] [i_12] [i_12] &= ((/* implicit */unsigned int) arr_17 [i_10] [i_10] [i_10 + 1] [i_10]);
            arr_47 [i_10] [i_12] = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) (+(((var_9) / (((/* implicit */int) arr_23 [i_12])))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) arr_11 [11LL] [i_13]);
            var_32 = var_1;
            arr_50 [i_10] = ((/* implicit */short) ((unsigned long long int) var_6));
        }
        arr_51 [i_10 - 1] [i_10] = ((/* implicit */short) ((arr_8 [i_10] [i_10 - 1] [i_10]) < (((/* implicit */long long int) min((arr_40 [i_10]), (((/* implicit */int) ((-21LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48350)))))))))));
    }
    var_33 |= ((/* implicit */int) (-(var_5)));
    var_34 -= min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((var_5) ^ (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min(((~(var_3))), (((var_9) & (((/* implicit */int) var_14))))))));
    var_35 = ((/* implicit */unsigned char) (~(min((((var_5) - (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_3))))))));
}
