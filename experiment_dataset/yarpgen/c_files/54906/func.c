/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54906
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
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (short)-32755)), (10788966971712213988ULL))), (((/* implicit */unsigned long long int) ((_Bool) 7657777101997337627ULL)))));
                        var_13 = ((/* implicit */int) ((10788966971712214003ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10788966971712213988ULL)) ? (10788966971712213965ULL) : (14207457192799498532ULL)));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) 10788966971712213982ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((unsigned char)105), ((unsigned char)77)))))) : (((((/* implicit */_Bool) max((7657777101997337631ULL), (((/* implicit */unsigned long long int) 7U))))) ? (max((((/* implicit */unsigned long long int) 3640153509U)), (7657777101997337633ULL))) : (min((((/* implicit */unsigned long long int) (unsigned short)36514)), (13900551640910265241ULL))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 2097151LL)) || (((/* implicit */_Bool) max((16521432609098295630ULL), (((/* implicit */unsigned long long int) 2097151LL)))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) ((_Bool) 1009598931)))))) ? (min((max((((/* implicit */long long int) (_Bool)0)), (2097168LL))), (((/* implicit */long long int) ((int) 602386757))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((33554431), (((/* implicit */int) (short)63)))))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((unsigned long long int) 10788966971712213982ULL))) ? (((/* implicit */int) ((unsigned char) min((1925311464611255985ULL), (((/* implicit */unsigned long long int) (short)-25485)))))) : (((int) ((unsigned char) (unsigned char)136))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_17 += ((/* implicit */int) ((unsigned char) max((((/* implicit */int) ((_Bool) (unsigned char)13))), (((((/* implicit */_Bool) 10788966971712213989ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)46039)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20054)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) 2097166LL)) : (7657777101997337650ULL))))));
                                var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)20)), (-9223372036854775801LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)25312))) ? (((/* implicit */int) ((_Bool) 4161536LL))) : (((/* implicit */int) ((unsigned short) 10788966971712214005ULL)))))))));
                }
                for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_21 = ((short) ((((/* implicit */int) (unsigned short)65533)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) == (10788966971712213989ULL))))));
                    arr_29 [i_4] = ((/* implicit */short) max(((((_Bool)0) ? (((/* implicit */int) (short)0)) : (-599170473))), ((-(((/* implicit */int) ((signed char) 955777678390892050ULL)))))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    arr_32 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned long long int) (-2147483647 - 1)));
                    var_22 = ((/* implicit */unsigned int) ((int) 2147483647));
                }
            }
        } 
    } 
}
