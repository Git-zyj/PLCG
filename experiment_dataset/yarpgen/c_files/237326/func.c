/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237326
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
    var_14 = ((/* implicit */int) var_0);
    var_15 -= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) var_13);
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (((((~(arr_6 [i_0] [i_0]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 8727373545472LL)) ? (arr_5 [i_1]) : (((/* implicit */int) (short)32332))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [7])) || (((/* implicit */_Bool) 7))))))));
                arr_9 [11LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)52845), (((/* implicit */unsigned short) (_Bool)1))))) > (((-177904096) ^ (((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_3])))) && (((((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (arr_14 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((min((((((/* implicit */_Bool) 12656106559384861318ULL)) ? (5790637514324690297ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned long long int) ((unsigned char) var_13))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (((/* implicit */int) (signed char)-95)))))))));
                var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(5790637514324690297ULL)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_2] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned long long int) 3145728U)) : (5790637514324690314ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
            }
        } 
    } 
}
