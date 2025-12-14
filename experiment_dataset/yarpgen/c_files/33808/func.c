/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33808
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
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (7484908964451493642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30618))) : (3106039238U)))))));
    var_17 = ((((/* implicit */_Bool) 15282321880548083111ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-6850967603744241265LL));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (1727064001) : (((/* implicit */int) (unsigned short)65494))))) ? (((((/* implicit */_Bool) (signed char)-53)) ? (9895690602576901151ULL) : (((/* implicit */unsigned long long int) -1727063983)))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)45043))))), (max((((/* implicit */unsigned long long int) 1509180084)), (18238229690513540482ULL)))))));
                    var_18 = ((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)20495)) : (1192093789)))));
                    arr_9 [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) : (((unsigned int) (short)-30618))))), (max((4307511881149303635ULL), (((/* implicit */unsigned long long int) 3689706910U))))));
                    var_19 = ((/* implicit */_Bool) 1727064001);
                }
            } 
        } 
    } 
}
