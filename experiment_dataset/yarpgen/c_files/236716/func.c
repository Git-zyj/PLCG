/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236716
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_3 [i_4]);
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (!(((/* implicit */_Bool) -679491336050537048LL)))))));
                                var_21 = ((/* implicit */int) var_18);
                                arr_13 [i_4] [4] [2LL] [i_0] = ((/* implicit */long long int) ((short) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1]));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_13);
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 679491336050537037LL))))))));
                        arr_16 [i_0] [(short)6] [i_0] [i_0] [i_2] [i_5] = ((((/* implicit */_Bool) -1054854337)) ? (((unsigned int) ((long long int) (unsigned short)65522))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21858))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        var_24 = ((/* implicit */int) (signed char)-102);
                        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) : (((long long int) 18446744073709551595ULL))));
                    }
                    var_26 = ((((/* implicit */_Bool) ((unsigned short) 12248610690698289566ULL))) ? (((((/* implicit */_Bool) 7317843512835928227LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 564970316U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_18)) ? (7317843512835928227LL) : (var_1))))) : (((long long int) 6198133383011262050ULL)));
                    arr_17 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */_Bool) 679491336050537049LL);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 9271303257924969963ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25349))) : (((((/* implicit */_Bool) (short)21857)) ? (-7317843512835928232LL) : (((/* implicit */long long int) ((unsigned int) -108179210922093522LL)))))));
}
