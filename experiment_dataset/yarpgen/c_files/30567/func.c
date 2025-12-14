/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30567
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : ((-(-2416798590229870052LL)))))) ? (max((((/* implicit */int) (short)1024)), ((~(((/* implicit */int) (unsigned short)20977)))))) : (((((/* implicit */_Bool) (unsigned short)20970)) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)44558)) : (((/* implicit */int) (unsigned short)44560)))) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) (_Bool)0);
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)20976), ((unsigned short)44565)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) : (-7365872430585215929LL)));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (5290506097390286293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)44558))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            var_16 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) max(((_Bool)0), ((_Bool)1)))), (2940622610U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)13387)))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (unsigned short)44559)) : (((/* implicit */int) (signed char)2))))), (((((/* implicit */_Bool) (signed char)39)) ? (4294967295U) : (4294967295U)))))) ? (((((/* implicit */_Bool) 9792455162969577906ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)96))))) : ((+(2733868431U))))) : ((-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (1839278965U)))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) ((min((1839278965U), (4220892997U))) < (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32742)))))))) - ((+(((/* implicit */int) (unsigned short)972))))));
                            arr_15 [i_0] [i_1] [i_2] [i_4] [i_5] = ((((((/* implicit */_Bool) 2825348014761533543LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)52149)))) + ((-(((/* implicit */int) (signed char)-54)))));
                        }
                        arr_16 [i_4] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4125903957U)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 1692989205U))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) (unsigned short)44294)))), ((-(((/* implicit */int) (unsigned short)21241)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (18446744073709551615ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13387)))))))));
    var_20 = (_Bool)1;
}
