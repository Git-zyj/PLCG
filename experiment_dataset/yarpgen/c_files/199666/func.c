/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199666
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned short) var_1);
                            arr_11 [i_2 + 2] [(unsigned char)8] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_13), (arr_7 [i_0] [i_1] [i_2] [i_3])))), (((((/* implicit */_Bool) 230493936)) ? (((/* implicit */unsigned long long int) var_17)) : (0ULL)))))) ? ((+(((/* implicit */int) max((var_13), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max(((short)10209), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) var_4)))))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65535));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1 - 1]))))), (var_2)))) || (((/* implicit */_Bool) var_15))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (short)-32757))))))));
                arr_21 [i_4] [i_4] [10LL] = var_6;
                var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_20 [i_5] [i_4]))))));
                arr_22 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), ((unsigned short)65535)))) || (((((/* implicit */_Bool) 1059275971)) || (((/* implicit */_Bool) (unsigned short)46586)))))) ? (((((/* implicit */_Bool) -1059276000)) ? (((/* implicit */int) ((arr_15 [i_4] [i_5]) || (((/* implicit */_Bool) arr_19 [i_4] [i_4]))))) : (((/* implicit */int) arr_15 [i_5] [i_4])))) : (((((/* implicit */int) ((unsigned short) var_5))) % ((+(var_14)))))));
                var_23 = ((/* implicit */unsigned int) max((((long long int) arr_19 [i_4] [8])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_5])) ? (1059275971) : (((/* implicit */int) (short)512)))))));
            }
        } 
    } 
}
