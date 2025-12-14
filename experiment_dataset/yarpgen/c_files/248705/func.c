/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248705
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)3466), (((/* implicit */unsigned short) var_4)))))))) < (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_10)))) : (((/* implicit */int) ((short) (short)-1)))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(min((9607909099679948935ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)8])) ? (3985111578U) : (((/* implicit */unsigned int) var_9)))))))));
                    var_22 += ((/* implicit */short) ((((/* implicit */unsigned long long int) min((4194303), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_0])))))))) / (((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((~(18ULL)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_23 *= ((/* implicit */signed char) ((min((((/* implicit */long long int) var_2)), (var_18))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (159109217U))))))));
                        var_24 += ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) (signed char)58))) % (((/* implicit */int) ((var_18) != (((/* implicit */long long int) 1165904332))))))) * (((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)4))))));
                    }
                }
            } 
        } 
    } 
}
