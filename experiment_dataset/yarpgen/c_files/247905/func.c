/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247905
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) 751496966)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)156))))) : (((((/* implicit */_Bool) 17245414479095606772ULL)) ? (((/* implicit */int) (unsigned short)45112)) : (((/* implicit */int) (unsigned char)253))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_17 [i_4] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)112)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -5855733621739613085LL)) <= (16997460127643223806ULL))))));
                                var_11 += ((/* implicit */long long int) max(((unsigned short)48149), (((/* implicit */unsigned short) (unsigned char)62))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((~(((633713675) | (((/* implicit */int) (unsigned char)22)))))) : (((/* implicit */int) var_2))));
}
