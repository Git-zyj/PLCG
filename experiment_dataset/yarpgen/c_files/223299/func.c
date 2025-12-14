/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223299
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)40251)) << (((/* implicit */int) (_Bool)0))));
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)37039), (((/* implicit */unsigned short) (_Bool)1))))) ? (max((min((((/* implicit */long long int) -31951361)), (9223372036854775801LL))), (((/* implicit */long long int) max(((unsigned short)28496), ((unsigned short)40245)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 474264279)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) : (-2998124993663333927LL)))) ? ((+(-8770483442877909260LL))) : (((/* implicit */long long int) max((-474264280), (((/* implicit */int) (signed char)-103)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46909)) > (((((/* implicit */_Bool) (unsigned short)18645)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13822)) ? (((/* implicit */int) (unsigned short)59180)) : (((/* implicit */int) (signed char)1))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_12 = ((/* implicit */signed char) ((unsigned short) max(((_Bool)1), ((_Bool)1))));
                    var_13 = ((/* implicit */unsigned short) ((signed char) (unsigned short)46891));
                }
                arr_15 [(signed char)15] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5307093753681781948LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28959)))))))) ? (((/* implicit */long long int) max((((((/* implicit */int) (signed char)24)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-10))))) : (((((/* implicit */_Bool) (-(-448976468909654529LL)))) ? (max((((/* implicit */long long int) 4294967295U)), (2318254449797885117LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1446407650)) ? (((/* implicit */int) (unsigned short)46891)) : (-1346807385))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)127))))));
}
