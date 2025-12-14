/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49395
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_0))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((int) 7755493059645785497ULL))))))) : ((~(min((692899222U), (((/* implicit */unsigned int) (short)23256))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [15ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (short)-22677))))))) ? (max((((18446744073709551614ULL) & (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (signed char)-3)))) : ((~((-(480232845987425754ULL)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) (((((~(var_10))) <= (((/* implicit */int) ((unsigned short) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)5)) ? (852785336) : (((/* implicit */int) var_3))))))) : (17966511227722125884ULL)));
                            arr_12 [i_0] [i_2] [15U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((7755493059645785506ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_2)))) : (((((/* implicit */int) (short)2324)) | (((/* implicit */int) (unsigned short)65529))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1 + 2] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(10691251014063766139ULL)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-5)) & (((/* implicit */int) (unsigned char)139))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-22685)) == (((/* implicit */int) (short)-23691))))) != (((/* implicit */int) ((unsigned short) 3894632346U))))))));
                arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)-18))))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) 3894632349U)) ? (min((((/* implicit */unsigned int) var_10)), (2847722154U))) : ((-(3602068089U))))) >> (((((((/* implicit */_Bool) max((9593266497169229116ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((-4427968351900584013LL), (((/* implicit */long long int) 4294967282U)))) : (min((7259158692653415559LL), (((/* implicit */long long int) 4294967281U)))))) + (4427968351900584031LL))))))));
            }
        } 
    } 
}
