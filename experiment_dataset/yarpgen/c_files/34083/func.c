/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34083
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1485970276)) ? (var_10) : (((/* implicit */unsigned int) 1485970276))))) - (((((/* implicit */_Bool) (unsigned short)7536)) ? (8224335079155504416LL) : (((/* implicit */long long int) -1485970288))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (3766493870U))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_1] = (~(((arr_7 [(unsigned short)2] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0]) + (arr_11 [i_0] [i_1] [i_2] [i_3])))), ((+(18145620311758131087ULL)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_18 [i_1] [11ULL] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37168)) % ((-(((/* implicit */int) (short)224))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10456)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (2376143461U)))) : (((/* implicit */int) (unsigned short)18624))))) : (2376143461U)));
                        var_14 ^= (+(max((1420126339U), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)255))))))));
                        var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1821641721U)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
                    }
                    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1485970276) : (((/* implicit */int) var_3))))) ? (((unsigned int) 1954447965U)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14059)))))))) * (((((/* implicit */_Bool) 1918823834U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1485970295)))))) : (max((((/* implicit */unsigned int) (short)-25077)), (2246998759U))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 13; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [i_7] = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_34 [(_Bool)1] [i_5] = 2400944135U;
                                var_17 &= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                                var_18 = ((/* implicit */short) (_Bool)0);
                                var_19 ^= ((/* implicit */_Bool) (-(3663213359U)));
                            }
                        } 
                    } 
                    arr_35 [i_5] = ((/* implicit */_Bool) -1381902761816258451LL);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 11620411365538590058ULL)) ? (((/* implicit */int) (short)30416)) : (((/* implicit */int) (short)-28712)))))));
                }
            } 
        } 
    } 
}
