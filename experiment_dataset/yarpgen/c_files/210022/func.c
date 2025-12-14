/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210022
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_14))))))) ? ((-((~(((/* implicit */int) (signed char)104)))))) : (((/* implicit */int) (signed char)104))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)104)) <= (((/* implicit */int) (signed char)104))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2 - 2] [i_2]))) : (var_10))) + (((/* implicit */unsigned long long int) ((-1711361278) % (2147483636))))));
                    var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    arr_9 [i_0] [(_Bool)1] |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-1413037254702140532LL), (((/* implicit */long long int) (unsigned char)67))))), (((11ULL) >> (((arr_4 [i_0]) - (895688031)))))))) ? ((+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 3] [i_2])))) : (var_13));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4])) ? (min((min((1057399543), (((/* implicit */int) (signed char)101)))), ((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((arr_13 [i_3 + 2] [i_3 - 3] [i_3 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1]))))))));
                arr_15 [i_4] = ((/* implicit */int) ((((((((/* implicit */_Bool) 9573998167034085348ULL)) ? (1413037254702140522LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))))) < (((/* implicit */long long int) var_6)))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_12))))))) : ((+(arr_13 [i_3] [i_3] [(unsigned short)3])))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((unsigned char) max((((unsigned char) var_11)), (((/* implicit */unsigned char) ((_Bool) (signed char)-105))))));
}
