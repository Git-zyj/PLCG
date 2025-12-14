/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24087
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
    var_20 = ((/* implicit */unsigned short) (signed char)-1);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(unsigned char)10] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 1938589084)) : (min((3415432125U), (((/* implicit */unsigned int) var_15))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-17099))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17104))) / (4180374306481683816ULL))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */short) ((var_2) <= (var_0)))), ((short)17099))))));
                arr_6 [i_1] [i_1] = min((2147483647), (((((((/* implicit */int) (short)29209)) * (((/* implicit */int) (unsigned char)0)))) >> (((((((/* implicit */int) var_10)) << (((var_7) - (10627430251612931036ULL))))) - (32754))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((530186413U), (((/* implicit */unsigned int) (short)32767)))))))), (max((((/* implicit */int) max((((/* implicit */unsigned short) (short)-29210)), (var_19)))), (((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))))));
    var_23 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */int) (unsigned short)65535)), (max((-162350196), (((/* implicit */int) var_18)))))), (((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (unsigned short)52524)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)13011))))))));
        arr_9 [14] &= ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_25 *= ((/* implicit */short) max((((((/* implicit */int) (short)6762)) < (((/* implicit */int) var_12)))), (((((/* implicit */unsigned long long int) -920500313)) == (var_17)))));
            arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13011)) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)80))))) : (((((((((/* implicit */_Bool) var_6)) ? (-732090040) : (((/* implicit */int) var_19)))) + (2147483647))) >> (((/* implicit */int) ((6531155513965511002ULL) == (var_1))))))));
            arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */int) (short)-17099)) < (min((((/* implicit */int) min((((/* implicit */short) (unsigned char)201)), ((short)28837)))), (((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) var_11))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 707165186)) ? (((/* implicit */int) (short)-17099)) : (var_5)));
                var_26 = ((/* implicit */int) var_4);
            }
        }
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) == (var_17))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) != (var_13)))) - (((/* implicit */int) (short)-29216))))))))));
            arr_22 [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 134209536U)) % (var_16)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48179))) - (var_17))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            arr_23 [i_2] [i_2] [i_5] = ((/* implicit */short) (_Bool)1);
        }
        var_28 = ((/* implicit */unsigned short) (short)24241);
    }
}
