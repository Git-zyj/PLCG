/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32362
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((((12925551792201238357ULL) << (((var_7) - (1191458849))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                var_12 = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
                var_13 ^= ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_2 [i_0] [i_0] [i_0]))))));
                var_14 = (~((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))));
                arr_4 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_9))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (((((_Bool)1) ? (183060271322589147ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))) * (((/* implicit */unsigned long long int) (-((-(var_8))))))));
        var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))))) ? (((((/* implicit */_Bool) ((2873477588475262706LL) << (((10393716942757478666ULL) - (10393716942757478665ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
        var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
        arr_8 [i_2] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)67))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_18 = ((/* implicit */int) arr_6 [i_3]);
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_4 - 1]);
                    arr_17 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)14))))) ? ((((_Bool)1) ? (1076834495157630863ULL) : (((/* implicit */unsigned long long int) 2268388737U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_4] [9U])) % (((/* implicit */int) var_0)))))));
                    var_20 = ((/* implicit */unsigned int) (+(arr_13 [i_4 - 1] [i_4])));
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((3355767051719436818LL) >> (((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned short)0])) ^ (((/* implicit */int) var_9))));
    }
    var_24 = ((/* implicit */signed char) 13168824742380469141ULL);
    var_25 = ((/* implicit */signed char) ((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))));
}
