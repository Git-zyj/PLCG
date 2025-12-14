/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25376
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */long long int) 688134546U)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14989)) & (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) 1101171435)) : (18294248198960103082ULL)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((long long int) 18294248198960103086ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9208954949873418727LL)) || (((/* implicit */_Bool) -1101171436))))) : (((/* implicit */int) (short)14984)))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) != (-784218849)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_13 [i_0] [9U] [8ULL] [i_3] [19LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1101171435)) ? (((/* implicit */unsigned long long int) var_1)) : (144115187002114048ULL)));
                            arr_14 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) 3765377903183700583LL));
                        }
                        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) var_7);
                            arr_18 [i_2] [i_2] [i_1] [i_2] [i_0 - 1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8851)) ? (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (var_1))) : (((((/* implicit */_Bool) var_6)) ? (1992624773U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14991)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2778)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (961043652552979694ULL)));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)6))) ? (((((/* implicit */long long int) 3544379034U)) / (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-75)))));
                        }
                        var_17 = ((/* implicit */unsigned int) ((short) (unsigned short)30821));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (var_9) : (((/* implicit */long long int) 1610612736))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16384)) ? (1610612736) : (((/* implicit */int) (short)14997))))) ? (((int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) 310280665U)) && (((/* implicit */_Bool) 0U)))))));
                        arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((short) var_0));
                    }
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        arr_24 [i_0] [i_0 - 2] [6ULL] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) min((0U), (((/* implicit */unsigned int) (short)26142))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) ^ (((/* implicit */int) (unsigned short)34715))))) ? (min((4294967295U), (((/* implicit */unsigned int) (unsigned short)34732)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((signed char) var_8))), (((short) (signed char)-7))))))));
                        var_21 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */long long int) 883177021)) <= (var_9)))), (((short) var_3))));
                    }
                    var_22 = ((/* implicit */int) ((short) 2302342545U));
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((var_2) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207)))))))) / (max((var_4), (((/* implicit */unsigned long long int) var_11)))));
}
