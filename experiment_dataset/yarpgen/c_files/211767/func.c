/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211767
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1879048192U)) & (16252928ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) -5907172120049177407LL);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446743798831644672ULL)) ? (-6620126012076908277LL) : (-7301141574524917789LL)));
                            var_19 = min((arr_8 [i_2] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((7360695580179723147ULL) <= (15502426346144187031ULL)))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) min(((((_Bool)1) ? (18446743798831644672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)868))))), (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
}
