/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54812
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(signed char)14] [i_0] [9] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) ^ (var_2)));
                                var_18 = max(((unsigned short)65535), ((unsigned short)0));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_2] [i_0] [i_0] = var_14;
                        var_19 |= ((/* implicit */int) (unsigned short)65533);
                    }
                }
            } 
        } 
        var_20 += ((/* implicit */signed char) ((((/* implicit */int) min((max(((unsigned short)4586), ((unsigned short)0))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3380)) < (((/* implicit */int) (unsigned short)54017)))))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (9718904969237843218ULL))))));
        var_21 = ((/* implicit */unsigned long long int) min((min(((unsigned short)65530), ((unsigned short)3382))), (max(((unsigned short)65534), ((unsigned short)3382)))));
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        for (int i_7 = 2; i_7 < 15; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_26 [i_6] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)65530)), (var_2))) ^ (max((var_2), (((/* implicit */int) (unsigned short)0))))));
                    arr_27 [i_6] = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))), (var_2))) != (((/* implicit */int) (signed char)7))));
                }
            } 
        } 
    } 
}
