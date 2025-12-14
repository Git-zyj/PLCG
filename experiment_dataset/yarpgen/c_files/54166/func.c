/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54166
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_10)))))))))) >= (var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [15] [11U] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))) * (var_9));
                arr_5 [i_1] [7] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((max((arr_0 [i_1]), (((/* implicit */unsigned int) var_18)))) + (((/* implicit */unsigned int) min((-1486015310), (1486015325)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)240)) >> (((((/* implicit */int) (signed char)114)) - (105))))) << (((arr_0 [i_0 - 1]) - (2109143454U))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2 + 3] [(signed char)16] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (2139022740199122370LL)))) << ((((~(1099511627520ULL))) - (18446742974197924072ULL)))));
                            arr_11 [i_3] = ((/* implicit */unsigned long long int) -1486015310);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_5))))) : ((~(var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))))))));
                            arr_16 [i_0] [i_0] [6LL] [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((var_10) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (1486015309) : (((/* implicit */int) arr_15 [i_5] [i_5 - 1] [2ULL] [i_5 - 2])))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_12 [i_0 - 1] [i_0 - 1] [i_5 - 1])));
                        }
                    } 
                } 
                arr_17 [i_0 - 1] [(unsigned short)13] = ((/* implicit */long long int) var_16);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) var_16)), (var_8)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (3704571899904113742ULL)))))), (var_18)));
    /* LoopNest 2 */
    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                var_24 = 2128763050744890996LL;
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((arr_18 [i_6 + 1]), (((((/* implicit */long long int) ((/* implicit */int) var_17))) <= ((-(var_7))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) min((((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_14)))) ? (((((/* implicit */unsigned long long int) 2088960U)) | (var_11))) : (((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) var_4))));
}
