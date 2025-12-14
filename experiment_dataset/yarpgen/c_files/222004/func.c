/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222004
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1046278535U)) && (((/* implicit */_Bool) (signed char)76))))) : (((/* implicit */int) (signed char)-63))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4063232U))))))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */int) ((max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_14)))))) * (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
        var_22 = (~(((/* implicit */int) (unsigned short)7899)));
    }
    for (int i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) arr_9 [i_2 + 2]);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_24 &= ((/* implicit */unsigned char) min((((signed char) arr_8 [i_2 - 1])), ((signed char)40)));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-78)))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (max((((/* implicit */int) var_15)), (var_13)))))) != (((unsigned long long int) var_19))));
    var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7590053446130395375LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)57639))))) : (var_19)));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17207405679167076681ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4290904073U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)7906), (((/* implicit */unsigned short) (signed char)50))))))))) : (var_10)));
}
