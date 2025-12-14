/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192905
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
    var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    var_16 ^= ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */int) var_3)) / (((/* implicit */int) var_14)))), (((var_11) / (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-96)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)107))))) ? (min((((/* implicit */unsigned long long int) var_0)), (10104867107995147719ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((8341876965714403897ULL) - (8341876965714403886ULL)))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (845705730) : (-845705735))) : (max((666534989), (((/* implicit */int) (unsigned short)15922))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((-666534995) | (((/* implicit */int) (unsigned short)4749))))), (10104867107995147708ULL)))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) arr_4 [i_4 - 3])) : (((/* implicit */int) (short)(-32767 - 1))))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) / (((((arr_6 [i_1]) << (((/* implicit */int) (_Bool)1)))) & ((-(7847997712129809658ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_3))))))))));
                                var_22 -= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_6])))) << (((((6204994777986588359ULL) & (((/* implicit */unsigned long long int) -666535001)))) - (6204994777868491390ULL)))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (arr_6 [i_1])));
                                var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_5] [i_5]))))))));
                                arr_18 [i_5] [i_1] [i_2] [i_5] [i_6] = var_2;
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) -845705754))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? ((~(-845705731))) : (((/* implicit */int) (signed char)14))))));
                }
            } 
        } 
    } 
}
