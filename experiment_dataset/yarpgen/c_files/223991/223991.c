/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((4293918720 ? 62 : 62))) ? (((2647594812 ? -67 : 195))) : 2097151))) ? 49 : 32767));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (((((((2271489194 ? 18284 : 1768566879))) ? 4293918720 : ((10323 ? 4095 : 26445))))) ? 55100 : 55100);
        var_20 = (min(var_20, 10764));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = -67;
        var_21 ^= ((9600594 ? 2305843009213693944 : 173));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_22 = (4293918703 ? (((25839 ? (((142 ? 25839 : -10323))) : 1187107924))) : ((-6701077382608476297 ? (((55221 ? 4293918720 : 60961))) : ((52 ? 41 : -6701077382608476297)))));
                        var_23 = 9223372036854775807;
                    }
                }
            }
        }
        var_24 = (min(var_24, (((206 ? -6701077382608476297 : (((((61440 ? 172 : 67))) ? ((4569990806131665580 ? 9488232133270867769 : 6728969252777560212)) : 214)))))));
    }
    #pragma endscop
}
