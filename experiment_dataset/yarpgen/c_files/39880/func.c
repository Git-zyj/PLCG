/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39880
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
    var_10 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) (short)21316)) ? (var_6) : (((/* implicit */long long int) -12)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)217))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (signed char)-101)) : (-10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 727935155))))) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) + (min((((/* implicit */int) ((((/* implicit */int) var_2)) != (-727935170)))), (((int) 727935131)))))))));
                        var_12 = ((/* implicit */int) (~(1809988641041272567ULL)));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [4LL] [i_0]);
    }
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-111))))))) * (min((((4095U) >> (((-2014288962) + (2014288968))))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-111))))));
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (((((unsigned long long int) 9)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8))))))))));
}
