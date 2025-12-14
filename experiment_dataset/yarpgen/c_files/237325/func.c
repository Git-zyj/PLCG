/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237325
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31719)) ^ (((/* implicit */int) (_Bool)0))))))))));
                var_14 = ((/* implicit */signed char) ((short) ((long long int) (signed char)107)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_3] [i_2])) ? (2818402237928440782ULL) : (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) (short)8190)))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)8190)) : (((/* implicit */int) arr_9 [i_3]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
            var_16 ^= (short)8215;
            var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_10 [(_Bool)1]) & (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_2])))))))), (var_10)));
        }
        var_18 ^= ((/* implicit */long long int) ((short) (-(((/* implicit */int) (!(var_11)))))));
        arr_12 [(unsigned short)17] = ((/* implicit */long long int) min((((unsigned short) (~(((/* implicit */int) (unsigned short)650))))), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (short)-1))))) != (((/* implicit */int) var_5)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (unsigned short)64886)), (var_3))) < (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2]))) > (arr_10 [i_4])))), (((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_6 [i_4] [20U])))))))));
        var_20 = ((/* implicit */_Bool) arr_0 [i_4]);
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */short) var_11)))))))));
    }
    var_21 &= ((/* implicit */_Bool) var_0);
}
