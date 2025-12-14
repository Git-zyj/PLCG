/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33155
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)6746)), (6U)))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) -8415338802390455777LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0 - 1] = ((short) var_12);
                var_14 = ((((arr_2 [i_0] [i_1]) / (arr_2 [i_0] [i_1]))) - (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)32767))));
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15845855143026909292ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (min((((/* implicit */unsigned long long int) var_7)), (2925479386516815880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_10 [i_2])))))))) ? (((/* implicit */int) ((((/* implicit */int) ((16595775043309315384ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) == (var_0)))) : (((var_5) ? (((/* implicit */int) arr_10 [i_2 + 1])) : ((-(((/* implicit */int) arr_10 [i_2 + 1]))))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3413186166275045936LL))))) : (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))) >> ((((~(var_1))) - (3820865980U)))));
        arr_12 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(arr_10 [i_2])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [(short)1] [i_2 + 1]), (((/* implicit */long long int) var_6))))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_10 [i_2]))));
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_15 [i_4] [i_5] [i_6]), (65535U)))) ? (((/* implicit */int) arr_19 [i_6] [i_5] [i_5] [i_4 + 2] [i_3] [i_3 - 1])) : (((min((-1643332824), (((/* implicit */int) var_6)))) / ((((_Bool)1) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (short)23296))))))));
                        var_18 = ((/* implicit */unsigned short) var_10);
                        arr_23 [5LL] [i_4] [i_5] [i_4] = ((/* implicit */signed char) var_11);
                        arr_24 [i_3] [i_4 + 1] |= ((/* implicit */short) arr_21 [i_3] [i_3]);
                        arr_25 [i_3] [i_4] [17U] [i_6] = ((/* implicit */short) ((arr_16 [i_3] [1LL]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2250558286120635551LL)) ? (((((/* implicit */_Bool) 15521264687192735736ULL)) ? (((/* implicit */int) arr_19 [i_3] [i_5] [i_5] [i_6] [i_3] [i_5])) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [7U] [(short)14] [i_6])))) : (((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        } 
        arr_26 [i_3] = ((/* implicit */unsigned long long int) (((!(var_5))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))) << ((((+(((/* implicit */int) (unsigned short)35877)))) - (35867))))))));
        arr_27 [i_3] = ((/* implicit */signed char) (+(var_10)));
    }
    for (int i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_33 [i_7] [i_7] = ((/* implicit */unsigned short) arr_19 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
            arr_34 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_8]))));
            arr_35 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_7 - 1]))) >= (((/* implicit */long long int) ((((/* implicit */int) ((arr_32 [19LL] [i_8] [i_7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) + ((~(((/* implicit */int) var_5)))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (short i_10 = 1; i_10 < 19; i_10 += 4) 
            {
                {
                    arr_41 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) var_3);
                    var_19 -= ((/* implicit */unsigned long long int) (+(arr_40 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1])));
                    var_20 = var_2;
                    var_21 *= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4063232)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            arr_44 [i_7] [9ULL] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3)))))));
            arr_45 [i_7] [i_11] [i_7 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) 2181431069507584LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)240))))) == (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7])) ? (arr_18 [i_7] [10LL] [11LL]) : (((/* implicit */unsigned long long int) var_1))))));
        }
        arr_46 [i_7] = ((/* implicit */long long int) (-(var_1)));
        arr_47 [i_7] = ((/* implicit */_Bool) (short)240);
    }
}
