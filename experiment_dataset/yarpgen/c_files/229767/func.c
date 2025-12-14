/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229767
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
    var_19 = ((/* implicit */short) 1302724182U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) -1207888756215220359LL));
                var_20 = ((unsigned char) -1207888756215220359LL);
                var_21 &= ((/* implicit */short) ((((long long int) 1207888756215220359LL)) << (((((-1901953161) + (1901953183))) - (21)))));
                var_22 = ((/* implicit */signed char) ((long long int) ((int) (~(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) -1901953161)))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(-1207888756215220359LL))))));
                }
                var_25 = ((/* implicit */int) min((var_25), ((~(max((((/* implicit */int) (short)5192)), (((((-1901953161) + (2147483647))) << (((((-18988326) + (18988343))) - (15)))))))))));
                arr_12 [i_2] [i_3] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */short) ((min((((/* implicit */unsigned int) (short)-5190)), (2992243114U))) << (11ULL)));
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) (-((~(((/* implicit */int) ((short) (unsigned short)0)))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((int) ((unsigned short) ((long long int) (short)(-32767 - 1))))))));
        var_27 = -7403993678525510481LL;
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned char)126)))));
        var_29 = ((/* implicit */signed char) (-(((int) (short)-30740))));
    }
    var_30 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) ((_Bool) (unsigned char)76))));
}
