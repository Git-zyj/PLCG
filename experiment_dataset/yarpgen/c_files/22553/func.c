/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22553
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_21 = ((/* implicit */short) (-(((1801525389917809048ULL) * (((/* implicit */unsigned long long int) ((5163829725417894278LL) + (((/* implicit */long long int) 586684327)))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)-31011))) >= (5163829725417894278LL)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(1069367729)))) && (((/* implicit */_Bool) (short)-31026)))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 5163829725417894284LL)) && (((/* implicit */_Bool) (short)31010))));
            arr_7 [i_0] = min((((/* implicit */unsigned int) (short)-31031)), (((((((/* implicit */_Bool) (short)-32741)) ? (3589436722U) : (962115301U))) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-30999))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (671605958U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-4231))))) : (((((/* implicit */_Bool) (signed char)45)) ? (1835687050U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))))))) && (((/* implicit */_Bool) (+(-1069367718))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12312))) ^ (18087581139353461183ULL)))) ? (((/* implicit */unsigned long long int) -546555496)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8))) | (359162934356090432ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31030)))))));
                }
            } 
        } 
        var_24 &= ((/* implicit */signed char) ((((-1069367735) + (2147483647))) >> (((972355154) - (972355140)))));
        arr_14 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) / (-489654829))) * (((((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (signed char)-12)))) / (((/* implicit */int) (unsigned short)511))))));
        var_25 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1069367729)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22943))) : (7435089273825409289LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) < (3774083153U)))))));
    }
}
