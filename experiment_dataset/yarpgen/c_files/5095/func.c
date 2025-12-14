/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5095
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(max((min((542419780U), (3758096384U))), (((536870900U) % (((/* implicit */unsigned int) arr_7 [i_2]))))))));
                                var_21 = ((/* implicit */unsigned char) 3758096390U);
                                var_22 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (+(-1)))))), ((!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_2 + 1]))))));
                                var_23 = ((/* implicit */long long int) min((((((/* implicit */int) arr_2 [i_0] [i_0])) | (max((1400633051), (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) 536870911U)) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)122))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_2 + 1] = ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((3758096384U) - (3758096384U)))) : (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [(unsigned char)9]));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [(signed char)3] [i_1] [(signed char)3] [(signed char)3] [(signed char)3] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)120)))))))));
                                var_24 = ((/* implicit */unsigned short) ((3758096384U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))));
                                arr_19 [i_0] [(_Bool)0] [i_1] [i_2] [(unsigned short)0] [i_6 - 1] = ((/* implicit */int) arr_17 [12LL] [i_5] [(short)13] [(signed char)8] [i_5 - 1] [i_5] [i_5 - 1]);
                                arr_20 [i_0] [i_0] [i_0] [i_5 - 2] [10] = ((/* implicit */signed char) (unsigned char)73);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) var_8);
                                var_26 = ((/* implicit */int) max((3758096384U), (3758096365U)));
                                arr_25 [(unsigned short)4] [i_1] [i_2] [i_7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-32363)))) || (((3758096384U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                                arr_26 [i_0] [i_0] [i_7] = ((/* implicit */long long int) min((((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)186))))) <= (((/* implicit */int) arr_9 [(_Bool)1] [(signed char)7] [i_2 + 1] [i_7 + 1])))), ((((-(((/* implicit */int) (unsigned char)249)))) == (((((/* implicit */int) (unsigned char)70)) + (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) (((((~(536870931U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_35 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_10]) : (((/* implicit */int) (unsigned char)70))))) && (((/* implicit */_Bool) min((max((2381674567U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)91))))))))));
                    arr_36 [(_Bool)1] [i_10] [i_11] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((3758096385U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10] [i_11])))))) * (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned int i_13 = 4; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_45 [i_9] [i_9] [i_9] [i_12 - 2] [(_Bool)1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_15)), (((min((1396876507877221857ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) / (((/* implicit */unsigned long long int) max((var_19), (((/* implicit */int) (_Bool)1)))))))));
                            arr_46 [i_9] [i_10] [i_12 - 3] [i_12] = ((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [13U] [i_9] [i_9] [i_13 - 1] [4]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) 2147483646ULL);
            }
        } 
    } 
}
