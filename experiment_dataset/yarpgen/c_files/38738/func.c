/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38738
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(signed char)0] [13ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                var_15 = max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3))))))), (((((unsigned long long int) var_5)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_7)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_6);
                            arr_11 [4LL] [4LL] [i_1] [4LL] [i_3] [i_3] = ((/* implicit */unsigned char) min(((short)-19970), ((short)19974)));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */signed char) ((max((var_4), (((/* implicit */unsigned long long int) arr_5 [(short)5])))) ^ (((/* implicit */unsigned long long int) arr_5 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) (unsigned char)20)) / (((/* implicit */int) var_11)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_23 [i_5] [i_5] [i_5] [i_5] = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_2)))), (var_8));
                            var_18 |= ((/* implicit */long long int) ((var_12) ^ (min((((var_12) ^ (var_14))), (((var_12) | (arr_13 [i_5] [i_5])))))));
                        }
                    } 
                } 
                var_19 = ((unsigned int) max((arr_22 [i_4] [i_4] [i_5]), (arr_19 [i_5])));
                var_20 *= ((/* implicit */short) (-(-8485034853415402566LL)));
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8485034853415402556LL)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_3))))) : (var_12)));
                var_22 = ((/* implicit */unsigned char) min((min((5624558407818864906ULL), (4610953276165435597ULL))), (((((/* implicit */_Bool) var_10)) ? (var_0) : (arr_13 [i_5] [i_5])))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)14))))) | (var_4)));
}
