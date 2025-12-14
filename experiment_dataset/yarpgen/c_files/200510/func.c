/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200510
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((16462264189162055953ULL) <= (16462264189162055953ULL)))), (max((128), (((/* implicit */int) (unsigned short)52750))))))), (1984479884547495663ULL)));
                var_20 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((_Bool) (_Bool)1))), ((-(((/* implicit */int) (unsigned short)21723))))))));
                var_21 = ((/* implicit */short) ((((((long long int) 13971969749452118902ULL)) / (((/* implicit */long long int) ((/* implicit */int) ((short) 1984479884547495659ULL)))))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (1984479884547495676ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 13868930967611170623ULL)))) : (((long long int) (unsigned short)21723))))));
                arr_4 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) max((min((min((-6622117483841117293LL), (((/* implicit */long long int) (_Bool)1)))), (((6622117483841117293LL) + (-6622117483841117293LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6622117483841117277LL)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (short)-23965))))) ? (((unsigned int) (unsigned char)149)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21214)) ? (((/* implicit */int) (short)-21204)) : (((/* implicit */int) (short)-21214))))))))));
            }
        } 
    } 
    var_22 = max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned short)65535))) >> (((((/* implicit */int) ((short) (unsigned short)43810))) + (21745)))))));
}
