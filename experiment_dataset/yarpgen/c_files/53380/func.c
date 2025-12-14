/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53380
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((min((((/* implicit */int) ((short) 18446744073709551615ULL))), (var_11))) <= (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1]))));
            arr_4 [10U] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)-32744)) || (((/* implicit */_Bool) (signed char)1)))));
        }
        var_15 = ((/* implicit */short) min((((/* implicit */long long int) var_5)), ((+(((long long int) var_3))))));
    }
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (var_3)))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) (short)32756)))))))));
    var_17 = ((/* implicit */signed char) var_12);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_6)) | ((((_Bool)0) ? (((/* implicit */long long int) 4294967279U)) : (3980910452879460710LL)))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_11))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_18 [(short)9] [i_3] [i_4 - 2] [i_5] [i_4] = ((/* implicit */signed char) ((int) arr_10 [i_2] [(signed char)0] [i_4] [i_5]));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) + (1125899906842623LL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)0)), (((long long int) min((var_3), ((-9223372036854775807LL - 1LL))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        for (signed char i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */long long int) ((((long long int) (!(((/* implicit */_Bool) var_12))))) < (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                                var_23 = ((/* implicit */unsigned int) (((!(var_2))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) - (var_0))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((unsigned char) (((~(var_12))) & (min((var_0), (((/* implicit */long long int) (short)31975)))))));
                }
            } 
        } 
    } 
}
