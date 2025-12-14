/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19064
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
    var_11 += ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)16)), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)10))))), (((((/* implicit */_Bool) (unsigned char)23)) ? (4097041877U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(18446744073709551609ULL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 += ((/* implicit */short) ((((arr_5 [i_0] [i_0] [7U] [(_Bool)1]) + (2147483647))) << (((min((((6278887992361752230ULL) | (((/* implicit */unsigned long long int) 2529737926U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-87))))))) - (219ULL)))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)76)) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (arr_5 [i_0] [i_0] [i_2] [i_3 - 1]))) - (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((-724155630) < (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) % (var_1))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((((/* implicit */_Bool) var_1)) ? (-724155622) : (((/* implicit */int) var_4)))) % (((/* implicit */int) arr_9 [i_5] [i_4 - 2] [i_4 - 2] [10LL])))) ^ ((-(((/* implicit */int) (_Bool)1)))))))));
                            arr_12 [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_2 [i_1] [i_4] [i_1])) - (((/* implicit */int) var_7)))), ((~(((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0]))) >= (var_1)))) <= (((/* implicit */int) (!(((((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0])) < (((/* implicit */int) arr_6 [i_0] [2] [i_5] [2]))))))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (signed char)-77)), (arr_7 [i_5] [i_4] [i_4] [i_4 + 1]))))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18924))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) && (((/* implicit */_Bool) var_8))))))));
            }
        } 
    } 
}
