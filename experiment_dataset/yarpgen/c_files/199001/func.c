/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199001
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
    var_15 = ((/* implicit */unsigned long long int) ((long long int) var_1));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_13)))))) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_1])) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(max((var_7), (((/* implicit */int) var_0))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    var_17 |= ((/* implicit */short) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)-1))));
                    arr_16 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [(short)15] [i_1])))) ? (max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 30122706162455443ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39879)) << (((var_5) + (3418104403120170677LL)))))) <= (min((5192071887653827740LL), (5330752549205087257LL))))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_1] = ((((/* implicit */_Bool) (-(var_11)))) ? (((long long int) arr_4 [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5] [i_6 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_0] [i_1 - 3] [i_7] [i_1] [i_1]))))));
                                var_18 = arr_7 [i_1] [i_1];
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((85073830027213705ULL), (8281914099904825147ULL)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 3; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6887)) ? (2721734782585807122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20721))))))));
                                var_20 = ((/* implicit */short) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((3447427399475639760LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11463))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (short)-1);
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
