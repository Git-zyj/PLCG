/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197983
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), ((~(min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))))));
        var_13 = ((/* implicit */signed char) (unsigned char)68);
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (-(342981217583750664LL)));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_14 = (~(((((/* implicit */_Bool) (-(342981217583750679LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) -342981217583750680LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_21 [i_1] [i_2] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (342981217583750679LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)88)))))))));
                            arr_22 [i_2] [(signed char)12] [(signed char)12] [(unsigned short)22] [i_5 + 3] [i_4] [(signed char)12] &= ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)67)))), ((-((-(579820554)))))));
            var_16 += ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46958))))))), (((/* implicit */unsigned int) ((max((-342981217583750680LL), (-8562731169032066107LL))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)187)))))))));
        }
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-24)) ? (min((((/* implicit */unsigned long long int) ((var_9) >= (var_7)))), ((~(8346393959749344254ULL))))) : (((((/* implicit */_Bool) min((-820870187), (29)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) : (((((/* implicit */_Bool) -20)) ? (8346393959749344254ULL) : (((/* implicit */unsigned long long int) -1616936074))))))));
}
