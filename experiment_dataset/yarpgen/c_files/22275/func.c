/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22275
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-161))))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3792656097U)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 2])) : (var_6))) + (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1873658151)) ? (((/* implicit */int) (short)-143)) : (max((var_6), (722065343)))))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4923)))));
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((min((((14080507185979710804ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) min((3242129508U), (((/* implicit */unsigned int) (short)-148))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 - 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 4]))) ^ (9688446990645134210ULL)))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_8)) : (var_6)))) : (var_5))) - (((/* implicit */long long int) (~(((((/* implicit */int) arr_4 [(_Bool)1])) * (((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? ((~(var_6))) : ((~(((/* implicit */int) var_2))))))) ^ (((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_3] [i_3] [i_2 + 3])), (var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_7))));
            var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [i_2])) ? (18) : (arr_7 [i_2 + 2] [i_2] [(_Bool)1])))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) ^ (9660233959723719843ULL)))))));
            var_20 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_9 [i_2] [i_3]) >> (((var_7) - (8271746410791518933ULL)))))) ? (((/* implicit */long long int) min((arr_5 [i_2]), (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_4 [i_2]))))) : (((4106820775U) & (((/* implicit */unsigned int) 417134540)))))))));
            var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)163))) | (arr_5 [i_2 + 4])))) % (((((/* implicit */_Bool) 3021368290U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_6)) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3805815596575659908LL)))));
            var_23 = ((/* implicit */_Bool) ((arr_12 [i_2] [i_4] [i_2 + 3]) ? (((/* implicit */int) (short)-30454)) : (((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2 + 3]))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) (short)10401))))) ? (((((/* implicit */long long int) -349232352)) ^ (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_10 [i_2] [i_4]))))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((-773457165) & (((/* implicit */int) (unsigned char)81)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)40467))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8786510113985831761ULL)))) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) ((794588210) != (((/* implicit */int) (_Bool)1)))))))) : (min((((((/* implicit */_Bool) var_1)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_2] [i_5]))))), (((/* implicit */unsigned long long int) var_6))))));
            var_26 = ((/* implicit */unsigned char) ((long long int) min((-1333966345), (((((/* implicit */int) (signed char)19)) << (((var_1) - (470098069329393165ULL))))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
    {
        var_27 = (~(((((/* implicit */int) var_9)) / (56317535))));
        var_28 = ((/* implicit */_Bool) (+(arr_9 [i_6 + 2] [i_6])));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((-56317519) + (56317520)))));
        var_30 ^= ((/* implicit */_Bool) (~(var_3)));
    }
    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_31 = ((/* implicit */long long int) (-(((arr_10 [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))));
        var_32 = ((/* implicit */unsigned short) var_1);
        var_33 = ((/* implicit */unsigned char) var_4);
        var_34 ^= ((/* implicit */short) (_Bool)0);
    }
}
