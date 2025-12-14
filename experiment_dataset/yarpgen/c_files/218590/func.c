/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218590
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
    var_10 = ((/* implicit */unsigned int) (unsigned short)59657);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) 1302018469U);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 5ULL);
                var_12 = ((/* implicit */unsigned int) min(((unsigned short)5893), (arr_1 [i_1])));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (-(17979075592778644012ULL)));
                            arr_11 [i_2] [i_1] [i_2] [i_2] = (+(4U));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3036733027U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31003)))))) || (((/* implicit */_Bool) (-(var_2))))));
        arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61849)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (65535U) : (4294901772U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4])))))) : (min((20U), (((/* implicit */unsigned int) (unsigned short)27577))))))));
        var_13 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_7)))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_12 [i_4]))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)2)))))))));
    }
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2305843009213689856ULL))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_5])) ? (3391663848U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                arr_22 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
