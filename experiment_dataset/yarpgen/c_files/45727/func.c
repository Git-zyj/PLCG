/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45727
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-895)))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((var_2) * (((/* implicit */unsigned long long int) (+(var_6))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) var_8);
                                var_16 += ((/* implicit */unsigned int) var_11);
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) -280348387))))))))));
                                var_18 = ((unsigned short) ((((/* implicit */_Bool) arr_6 [5LL] [i_2] [i_2 + 3] [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(280348387))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_6] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [i_6])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_6])))));
                            var_19 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3636218531U))), (((/* implicit */unsigned int) var_10))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_2)))) ? (min((((/* implicit */int) (_Bool)0)), (((arr_1 [i_0]) | (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((var_1) > (-1497178180))))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)895))))) >> (((/* implicit */int) var_10)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) & (var_1)));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (short i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) (unsigned short)64759);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_39 [4LL] [i_9] [i_9] = ((/* implicit */unsigned char) ((_Bool) var_5));
                                var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */unsigned int) (unsigned short)57762);
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((((/* implicit */long long int) var_8)) / (5838694780144765835LL))), (((-5867226937886293740LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
