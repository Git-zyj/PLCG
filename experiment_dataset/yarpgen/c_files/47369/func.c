/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47369
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */signed char) ((((/* implicit */int) (short)3373)) & (((/* implicit */int) arr_1 [1U] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_14)) & (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))))))));
                                var_22 = ((/* implicit */_Bool) (~(max((max((2068643927U), (((/* implicit */unsigned int) -1508084903)))), (((/* implicit */unsigned int) var_15))))));
                                var_23 -= ((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) (unsigned char)136)))) ? (max((var_8), (((/* implicit */unsigned int) (unsigned short)27141)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-15))))))), (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)123)))), ((~(((/* implicit */int) (_Bool)1))))))))))));
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) (unsigned char)142);
                                var_27 = ((/* implicit */unsigned char) (_Bool)1);
                                var_28 = ((/* implicit */_Bool) min((var_28), (var_11)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        arr_33 [i_5] [1ULL] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_29 -= (-((~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_10])) <= (arr_6 [i_10] [i_6] [(_Bool)1] [i_10])))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(var_12))))));
                        var_31 = ((/* implicit */_Bool) ((unsigned long long int) (((-(((/* implicit */int) arr_5 [i_5])))) & (((/* implicit */int) (short)-28571)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) arr_6 [i_5] [i_6] [i_5] [i_5]))), (((unsigned short) var_19))))) ? (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_28 [i_5] [i_6] [i_7] [(signed char)0] [i_7])))) : (((((/* implicit */_Bool) (signed char)-66)) ? (arr_6 [i_5] [i_5] [i_11 - 1] [i_11]) : (arr_6 [i_5] [i_11] [i_11 + 1] [(_Bool)1])))));
                                var_33 &= ((/* implicit */_Bool) (unsigned char)136);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        for (signed char i_14 = 1; i_14 < 15; i_14 += 2) 
                        {
                            {
                                arr_43 [i_5] [i_5] [i_6] [i_5] [i_5] [i_13] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (((/* implicit */int) (short)28571)) : (((/* implicit */int) (_Bool)1))))) ? (((int) arr_15 [i_5] [i_6])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5522)) : (((/* implicit */int) (unsigned char)107))))))) ? ((+((+((-2147483647 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)122)), (17461931497291067414ULL)))) && (((/* implicit */_Bool) var_10)))))));
                                var_34 &= ((/* implicit */signed char) (((+(arr_6 [i_13] [i_14 - 1] [i_14 - 1] [i_14 + 1]))) - (((/* implicit */int) ((arr_6 [i_6] [i_14 + 1] [i_14 + 1] [i_14 + 1]) == (arr_6 [i_13] [i_14 - 1] [i_14 + 1] [i_14 + 1]))))));
                                arr_44 [i_5] [(unsigned char)9] [i_5] [i_13] [i_14] = ((/* implicit */unsigned int) arr_31 [(short)8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */_Bool) var_2);
}
