/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28310
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
    var_13 *= ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [21LL])) ? (var_9) : (var_1)))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-1755))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (((((/* implicit */unsigned long long int) 6648820325292782531LL)) + (((((/* implicit */unsigned long long int) 9024053102299568674LL)) + (arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) (_Bool)1)), (-4LL))));
                            var_16 = ((/* implicit */long long int) ((((((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (((/* implicit */int) var_4)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_9))))) - (1)))));
                            var_17 = ((/* implicit */long long int) arr_7 [i_0]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [(_Bool)1])))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (14007385450666239247ULL))) ? ((+(-2933290845169490307LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))));
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) arr_4 [i_0])))) >> (((5933105511635727371LL) - (5933105511635727347LL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) var_10)))))) <= (var_5)));
}
