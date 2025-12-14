/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47457
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), ((-((-(min((var_6), (((/* implicit */unsigned long long int) 3880221696U))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(signed char)7] = ((/* implicit */short) min((((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) % (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_0))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))) < (7056570233287169615ULL)))))))));
                                arr_14 [i_4] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 836646591)))), (((_Bool) (!(((/* implicit */_Bool) 3880221711U)))))));
                                arr_15 [i_0] [i_1] [i_2] [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (~((-(var_6)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_2)))))) % ((+(((/* implicit */int) (short)-21403)))))))));
                            arr_21 [i_1 + 2] [i_0] [i_1 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) >> (((var_3) - (981263156U))))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) (short)32748);
                var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)-26713)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (2315170392U))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-6023))))) : (((/* implicit */int) ((unsigned short) min((17642602502246842969ULL), (((/* implicit */unsigned long long int) (short)-13995))))))));
    var_18 = ((/* implicit */unsigned short) (+((+((-(var_2)))))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (int i_8 = 3; i_8 < 10; i_8 += 2) 
        {
            {
                var_19 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) 1775975462U))))))))));
                var_20 = ((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) min((var_12), (var_13))))))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) >> (0ULL))))));
                var_21 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_4)) ? (0ULL) : (((/* implicit */unsigned long long int) 2315170392U)))), (((/* implicit */unsigned long long int) (~(2147483647)))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (-2147483647 - 1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 9; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) 2147483647))), ((~(var_0))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) (short)-13993)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))))) >> ((((-(((/* implicit */int) ((unsigned short) (unsigned char)68))))) + (92)))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -802377733)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (min((var_0), (((/* implicit */unsigned int) (unsigned char)57)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
