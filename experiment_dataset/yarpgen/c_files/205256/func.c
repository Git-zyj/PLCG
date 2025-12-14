/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205256
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
    var_11 = ((/* implicit */unsigned short) max((max((15166805983280623205ULL), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_0))))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) : (12559928884418556500ULL))), (((/* implicit */unsigned long long int) (unsigned short)60365))))));
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((5653919286387155814LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17710))))), (((/* implicit */long long int) (short)15))))) ? (3279938090428928410ULL) : (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (5653919286387155803LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1])) ? (((-5653919286387155814LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) 1254835027U))))), (((((_Bool) 15166805983280623203ULL)) ? (((((/* implicit */_Bool) (unsigned short)44775)) ? (13431084072597212920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) 620441402))))));
                var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 15166805983280623212ULL)) ? (((/* implicit */unsigned long long int) 7255951110532907424LL)) : (3279938090428928411ULL))), (((/* implicit */unsigned long long int) ((((unsigned int) (unsigned short)20659)) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) (signed char)14))), (max((min((((/* implicit */long long int) -620441403)), (5653919286387155803LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(_Bool)1])) > (((/* implicit */int) (unsigned short)20672)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((15166805983280623196ULL) << (((((/* implicit */int) (short)-27494)) + (27519)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((4246026523U) - (4246026523U)))))) : (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (-5270173110449318559LL))))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [20] [i_1])))) * (((var_5) / (-1830784672))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */short) ((unsigned char) 15166805983280623204ULL));
}
